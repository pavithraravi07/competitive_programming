/*The janitor of a high school is extremely efficient. By the end of each day, the janitor shifts all of
the school's waste into plastic bags weighing between 1.01 pounds and 3.00 pounds. All plastic
bags are dumped into the trash cans outside the school. One trip is described as selecting few
bags which together do not weigh more than 3.00 pounds, dumping them in the outside trash
can and returning to the school. Given the number of plastic bags n, and the weight of each bag,
determine the minimum number of trips the janitor has to make.

Example
n = 5
weight = [1.01, 1.99, 2.5, 1.5, 1.01]
The janitor can carry all plastic bags out in 3 trips: [1.01 + 1.99 , 2.5, 1.5 + 1.01].

Function Description
Complete the function efficientJanitor in the editor below. The function must return a single
integer that represents the minimum number of trips required.
efficientJanitor has the following parameter(s):
float weight[n]: weights of the bags*/

int efficientJanitor(int weight_count, float* weight) {
    float temp;
    for(int i=0; i<weight_count -1; i++){
        for(int j=0; j<weight_count -i -1; j++){
            if(weight[j]>weight[j+1]){
                temp = weight[j];
                weight[j] = weight[j+1];
                weight[j+1] = temp;
            }
        }
    }
    float sum=0;
    int count = 0;
    for(int i = weight_count-1; i>0; i-- ){
            sum=0;
            if(weight[i] != 0){
            count++;
            sum = weight[i];
            weight[i] = 0;
            for(int j = i-1; j>=0; j--){
                if(sum+weight[0] <= 3){
                    if(sum+weight[j] <= 3 && weight[j] != 0){
                        sum+= weight[j];
                        weight[j] = 0;
                    }
                }else{
                    break;
                }
            }
        }
    }
    if(weight[0] != 0){
        count++;
    }
    return count;
}
