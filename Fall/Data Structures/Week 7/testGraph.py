from turtle import *

color('red', 'blue')
begin_fill()
while True:
    forward(300)
    left(179)
    if abs(pos()-1) < 1 :
        break
end_fill()
done()