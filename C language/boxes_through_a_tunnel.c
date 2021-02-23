/*You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is
characterized by its length, width and height.
The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried
through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of
each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot
be rotated.

Input Format
The first line contains a single integer n, denoting the number of boxes.
n lines follow with three integers on each separated by single spaces - lengthi, widthi and
heighti which are length, width and height in feet of the i-th box.

Constraints
1 ≤ n ≤ 100
1 ≤ lengthi, widthi, heighti ≤ 100

Output Format
For every box from the input which has a height lesser than 41 feet, print its volume in a
separate line.*/

#include <stdio.h>
struct Box{
int length, width, height;
};
int volume(struct Box box){
return box.length * box.width * box.height;
}
int lower(struct Box box, int maxHeight){
return box.height < maxHeight;
}
int main(){
int n;
scanf("%d", &n);
struct Box boxes[100];
for (int i = 0; i < n; i++)
scanf("%d%d%d",&boxes[i].length,&boxes[i].width,&boxes[i].height);
for (int i = 0; i < n; i++)
if (lower(boxes[i], 41))
printf("%d\n", volume(boxes[i]));
return 0;
}
