# Initialize the values for variables x,y and z so that the output of the program is 4000 1500 2200


x=2200
y=4000
z=1500
from collections import deque
queue = deque([])
queue.appendleft(x)
queue.appendleft(z)
queue.appendleft(y)
print (queue.popleft(), end=" ")
print (queue.popleft(), end=" ")
print (queue.popleft(), end=" ")