#ifndef QUESTIONGROUP_H
#define QUESTIONGROUP_H
#include "question.h"
#include <vector>


class QuestionGroup
{
public:
    QuestionGroup();
    QuestionGroup(std::vector<Question> allQuestions): allQuestions(allQuestions){}

    void next();
    void previous();
    Question getQuestion();
    void setAllQuestions(std::vector<Question> newQuestions);
    void setQuestion( Question question);
    int getIndex();
    ~QuestionGroup();
    int size();
    void setIndex(int index);
    int getNumberOfCorrectAnswers();

private:
    std::vector<Question> allQuestions;
    int index = 0;

};

#endif // QUESTIONGROUP_H
