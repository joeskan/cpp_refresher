#include <iostream>
#include "cracking_the_coding_interview/examples/pairSumSequence.h"
#include "homemade/Stack.h"
#include "homemade/Queue.h"

bool temp(int num){
    return num == 3;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    int ans = pairSumSequence(3);
//    std::cout << ans << std::endl;
// std::cout << temp(2);
//Stack st(3);
//st.insert(10);
//std::cout << st.pop() << std::endl;
//int x = st.pop();
Queue q(5);
// std::cout << q.dequeue() << std::endl;
for (int i = 0; i < 5; i++){
    q.enqueue(i);
}
q.enqueue(10);


while (!q.isEmpty()){
    std::cout << q.dequeue() << std::endl;
}
    return 0;
}

