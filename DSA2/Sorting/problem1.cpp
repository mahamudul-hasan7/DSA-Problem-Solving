#include <iostream>
#include <vector>
using namespace std;

int findMax( vector<int> & arr, int left, int right){
    //base case
    if(left==right){

        return arr[left];
    }

    //Divide
    int mid= (left+right)/2;

    //conquer
    int leftMax = findMax (arr, left, mid);
    int rightMax= findMax (arr,mid+1, right);

    //combine 
    if (leftMax > rightMax){
        return leftMax;
    }
    else {
        return rightMax;
    }
}

int main(){
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array Element: ";

    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    int maxElement = findMax(arr,0,n-1);

    cout << "Maximum Element: " << maxElement << endl;
    return 0;
}
