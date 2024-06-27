#include <iostream>
using namespace std;
// get sum from array
int sum_from_array(int arr[],int array_length){
  int sum = 0;
  for(int i = 0;i<array_length;i++){
    sum = sum + arr[i];
  }
  return  sum ;
}
// Find Only odd sum
int sum_odd_numbers(int arr[],int length){
  int sum = 0;
  for(int i = 0;i<length;i++){
    if(arr[i] % 2 != 0){
      sum = sum + arr[i];
    }
  }
  return  sum;
}
// Find Only even sum
int sum_even_numbers(int arr[],int length){
  int sum = 0;
  for(int i = 0;i<length;i++){
    if(arr[i] % 2 == 0){
      sum = sum + arr[i];
    }
  }
  return  sum;
}

// Find If a number exists in one array,
int findArryElement(int arr[],int length,int searchNumber){
  int indexNumber;
  for(int i = 0;i<length;i++){
    if(arr[i] ==searchNumber){      
      indexNumber = i;
      return indexNumber;
    }
  }
  return -1;
}

// Find min of an array
int find_min_number(int arr[],int length){
  int min_number=0;
  for(int i = 0 ; i < length ; i++){
    if(min_number == 0 && min_number <= arr[i]){
      min_number = arr[i];
    }else if(min_number > arr[i]){
      min_number = arr[i];
    }
  }
  return min_number;
}
// Find sum from 0 to N 
int find_sum_from(int from_number,int to_number){
  int sum = 0;
  for(int i= from_number;i <= to_number;i++){
    sum = sum + i ;
  }
  return sum; 
}

int main() {
  int numbers[3];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
  // int arry_length = sizeof(numbers) / sizeof(numbers[1]);
  // float sum = sum_from_array(numbers,arry_length);
  float testSum = find_sum_from(1, 5);
  cout << testSum;
}