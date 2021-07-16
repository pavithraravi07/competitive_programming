/*
Input Format

There are two lines of input. The first line contains B: the breadth of the parallelogram. The next line contains H: the height of the parallelogram.

Constraints

Output Format

If both values are greater than zero, then the main method must output the area of the parallelogram. Otherwise, print "java.lang.Exception: Breadth and height must be positive" without quotes.

Sample input 1
1
3

Sample output 1
3
*/



static Scanner sc = new Scanner(System.in);
static boolean flag = true;
static int B = sc.nextInt();
static int H = sc.nextInt();

static{
    try{
        if(B <= 0 || H <= 0){
            flag = false;
            throw new Exception("Breadth and height must be positive");
        }
    }catch(Exception e){
        System.out.println(e);
    }

}

