#include <iostream>

int main(){
    std::string questions[]={"1. 2*2","2. 4+3","3. 3-1"};

    std::string options[][3]={{"a. 4","b. 3","c. 2"},{"a. 5","b. 12","c. 7"},
                             {"a. 1","b. 2","c. 19"}};

    char answerkey[]={'A','C','B'};
    char guess;
    int score=0;

    std::cout<<"SOLVE THE FOLLOWING QUESTIONS \n";

    for(int i=0;i<sizeof(questions)/sizeof(questions[0]);i++){
        std::cout<<"****************************\n";
        
        std::cout<<questions[i]<<'\n';

        std::cout<<"****************************\n";

        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j]<<'\n';
        }

        std::cin>>guess;
        guess=toupper(guess);

        if(guess==answerkey[i]){
            std::cout<<"Correct!\n";
            score++;
        }

        else{
            std::cout<<"Incorrect!\n";
            std::cout<<"CORRECT ANSWER: "<<toupper(answerkey[i])<<'\n';

        }

    }

    std::cout<<"*************\n";
    std::cout<<"SCORECARD\n";
    std::cout<<"correct:"<<score<<'\n';
    std::cout<<"total questions:"<<sizeof(questions)/sizeof(questions[0])<<'\n';
    std::cout<<"score:"<<double(score)/(sizeof(questions)/sizeof(questions[0]))*100<<'%'<<'\n';
    std::cout<<"*************\n";
    return 0;
}