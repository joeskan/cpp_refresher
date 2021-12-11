//
// Created by Joseph on 12/10/2021.
//

// demonstrates space and time complexity (pg. 41)

int pairSum(int a, int b) {
    return a+b;
}

int pairSumSequence(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += pairSum(i, i+1);
    }
    return sum;
}

