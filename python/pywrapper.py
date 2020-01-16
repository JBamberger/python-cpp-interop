from ctypes import *
lib = CDLL("./Wrapper.dll")

class Test:
    def __init__(self):
        self.obj = lib.Test_new()
    
    def sayHello(self):
        lib.Test_sayHello(self.obj)