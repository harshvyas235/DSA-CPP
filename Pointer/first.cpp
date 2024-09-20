// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
// int main(){
// int a=5;
// int *ptr = &a;
// // char name= 's';
// // char *cptr=&name;
// // cout<<a<<" "<<*ptr<<" "<<ptr<<" "<<&a<<" "<<&ptr<<endl;
// // cout<<sizeof(ptr)<<endl;
// // cout<<sizeof(cptr)<<endl;
// // cout<<name<<" "<<*cptr<<" "<<cptr<<" "<<&name<<" "<<&cptr<<endl;
// // long int d = 894;
// // long *dptr=&d;
// // cout<<sizeof(dptr)<<endl;
// // cout<<d<<" "<<*dptr<<" "<<dptr<<" "<<&d<<" "<<&d<<endl;
// // int *q=ptr;
// // cout<<*q<<endl;

// // int arr[4]={35,5,3,4};
// // cout<<0[arr];
// int **q= &ptr;

// cout<<q<<" "<<&ptr<<" "<<*q<<endl;

// return 0;
// }

// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
// int main(){
// int arr[]={1,2,3,4};
// int *p= arr+1;
// cout<<*arr+23;

// return 0;
// }

long long maximumSubarraySum(vector<int> &nums, int k)
{
    map<int, int> mapin;
    long long maxSum = 0;
    long long sum = 0;
    int i = 0;
    int j = 0;

    while (j < k)
    {
        if (mapin[nums[j]] == 0)
        {
            sum += nums[j];
            mapin[nums[j]]++;
            j++;
        }
        else
        {
            while (mapin[nums[j]] != 0)
            {
                mapin[nums[i]] == 0;
                sum -= nums[i];
                i++;
            }
        }
    }
    maxSum = max(sum, maxSum);

    while (j < nums.size())
    {

        if (j - i + 1 != k)
        {
            j++;
            if (mapin[nums[j]] == 0)
            {
                sum += nums[j];
                mapin[nums[j]]++;
            }
            else
            {
                while (mapin[nums[j]] != 0)
                {
                    mapin[nums[i]] == 0;
                    sum -= nums[i];
                    i++;
                }
                else if (j - i + 1 == k)
                {
                    maxSum = max(sum, maxSum);

                    mapin[nums[i]] = 0;
                    sum -= nums[i];

                    i++;
                }
            }

            return maxSum;
        }