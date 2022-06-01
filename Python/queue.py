# Initialize the values for variables x,y and z so that the output of the program is 300 250 2222 150



x = 250
y = 150
z = 2222
from collections import deque
queue = deque([300])
print (queue.popleft(), end=" ")
queue.append(x)
queue.append(y)
queue.append(z)
print (queue.popleft(), end=" ")
print (queue.pop(), end=" ")
print (queue.popleft(), end=" ")