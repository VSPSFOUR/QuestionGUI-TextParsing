#include "questiongroup.h"

QuestionGroup::QuestionGroup() {}

void QuestionGroup::next(){
    if(this->index  < (this->allQuestions.size() -1 )){
        index ++;
    }else{

        // TODO : for debuging purposes - refine later
        std::cout << "No more next questions" << std::endl;
    }
}
void QuestionGroup::setIndex(int index){
    if(0 <= index && index < allQuestions.size()){
        this->index = index;
    }else{
        std::cout << "Invalid Index" << std::endl;
    }
}
void QuestionGroup::previous(){
    if(this->index  > 0){
        index --;
    }else{
        // TODO : for debuging purposes - refine later
        std::cout << "No more prior questions" << std::endl;
    }
}
void QuestionGroup::setAllQuestions(std::vector<Question> newQuestions){
    this->allQuestions = newQuestions;
}
int QuestionGroup::size(){
    return this->allQuestions.size();
}


int QuestionGroup::getIndex(){
    return this-> index;
}

void QuestionGroup::setQuestion( Question question){
    this->allQuestions[index] = question;
}





Question QuestionGroup::getQuestion(){
    // Assume that next() and previous method deal with invalid indexes

    return this->allQuestions[this->index];


}

QuestionGroup::~QuestionGroup(){
    // TODO :update for memory management
}

int QuestionGroup::getNumberOfCorrectAnswers() {
    int correctAnswers = 0;
    for (int i = 0; i < allQuestions.size(); ++i) {
        if (allQuestions[i].isCorrect()) {
            correctAnswers++;
        }
    }
    return correctAnswers;
}
