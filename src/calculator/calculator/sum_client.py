#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class SumClient(Node):
    def __init__(self):
        super().__init__('sum_client')
        self.client = self.create_client(
            AddTwoInts,         # Тип сервиса (должен совпадать с сервером)
            'sum'               # Имя сервиса (должно совпадать с сервером)
        )
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Сервис не доступен, продолжаю ждать...')
    
    def send_request(self, a, b):
        request = AddTwoInts.Request()
        request.a = a
        request.b = b
        try:
            future = self.client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5)
            if future.result() is not None:
                result = future.result().sum
                self.get_logger().info(f'Получен ответ: {a} + {b} = {result}')
                return result
            else:
                self.get_logger().error('Сервис не вернул ответ')
                return None
                
        except Exception as e:
            self.get_logger().error(f'Ошибка при вызове сервиса: {e}')
            return None

def main(args=None):
    rclpy.init(args=args)
    client = SumClient()
    client.send_request(10, 20)
    client.destroy_node()