#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// this function generates random 2digit mental maths question 
float ques(float correct_ans){
    time_t t;
    srand((unsigned)time(&t)); //seed for random function
    
    //variables
    float a = rand()%100+10;
    float b = rand()%100+10;
    int max_op_index_val = 3;
    int rand_op_index_val = rand()%3;
    

    //operators
    char operators[] = {'+','-','*','/'};

    //print the question
    printf("%.0f %c %.0f = ",a,operators[rand_op_index_val],b);

    //correct answer
    switch (operators[rand_op_index_val])
    {
    case '+':
        correct_ans = a + b;
        break;
    
    case '-':
        correct_ans = a - b;
        break;
    
    case '*':
        correct_ans = a * b;
        break;
    
    case '/':
        correct_ans = a/b;
        break;

    default:
        break;
    }
    return correct_ans;
    //printf("%.2f",correct_ans);
    //printf("%d",rand_op_index_val);
    //printf("%d %d",a,b);
}

int main(){
    float user_input;
    float correct_ans = ques(correct_ans);
    int score;
    // take user answer and assign its value to user_input variable
    scanf("%f",&user_input);

    // Check if the answer is correct 
    if(user_input==correct_ans){
        printf("Correct!");
    }
    else{
        printf("Wrong!");
    }

    //printf("%f",correct_ans);
    //printf("%f",user_input);
    return 0;
}

