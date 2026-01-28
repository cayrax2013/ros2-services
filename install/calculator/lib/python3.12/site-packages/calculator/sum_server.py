#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class SumServer(Node):
    
    def __init__(self):
        super().__init__('sum_server')
        self.srv = self.create_service(
            AddTwoInts,           # Тип сервиса
            'sum',                # Имя сервиса (клиенты будут обращаться по этому имени)
            self.handle_request     # Функция-обработчик
        )
    
    def handle_request(self, request, response):
        result = request.a + request.b
        response.sum = result
        self.get_logger().info(f'Ответ: {request.a} + {request.b} = {result}')
        return response


def main(args=None):
    rclpy.init(args=args)
    server = SumServer()
    try:
        rclpy.spin(server)
    except KeyboardInterrupt:
        print("Сервер остановлен")
    finally:
        server.destroy_node()