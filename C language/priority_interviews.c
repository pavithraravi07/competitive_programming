/*Microsoft has come to hire interns from your college. N students got shortlisted out of which
few were males and a few females. All the students have been assigned talent levels. Smaller
the talent level, lesser is your chance to be selected. Microsoft wants to create the result list
where it wants the candidates sorted according to their talent levels, but there is a catch. This
time Microsoft wants to hire female candidates first and then male candidates.
The task is to create a list where first all-female candidates are sorted in a descending order
and then male candidates are sorted in a descending order.

Input Format
The first line contains an integer N denoting the number of students. Next, N lines contain two
space-separated integers, ai and bi.
The first integer, ai will be either 1(for a male candidate) or 0(for female candidate).
The second integer, bi will be the candidate's talent level.

Constraints
1 <= N <= 105
0 <= ai <= 1
1 <= bi <= 109

Output Format
Output space-separated integers, which first contains the talent levels of all female candidates
sorted in descending order and then the talent levels of male candidates in descending order.*/

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++) 
    {  
        if (arr[j] < pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
 
int main(){
    int n,count=0,count1=0,arr[100000],arr1[100000],i,a,b;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0)
        {
            arr[count]=b;
            count++;
        }
        else
        {
            arr1[count1]=b;
            count1++;
        }
        
    }
    quickSort(arr,0,count-1);
    quickSort(arr1,0,count1-1);
    for(i=count-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    for(i=count1-1;i>=0;i--)
    {
        printf("%d ",arr1[i]);
    }
    }
