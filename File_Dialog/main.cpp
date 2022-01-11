#include "dialog.h"
#include <QApplication>
#include <QString>
#include <QStringList>
#include<QDebug>
#include <iostream>
#include <QChar>
#include<QRegExp>
#include <QRegularExpression>
#include <time.h>
//contain 이 아닌 KMP or 보이어 무어 알고리즘 사용시??
QStringList QStringList_filter(const QStringList *that,const QString &str)
{
    QChar recog = str.front();

    //str.insert(" ",3);
    QStringList contrast ;//= that;//contrast에 str이 가능한 모든 공백을 포함한 문자열 추가
    contrast << "홍 길 동";
    contrast << "홍길 동";
    contrast << "홍 길동";
    contrast << "홍길동";

    QStringList res;
    QStringList result;

    for (int i = 0; i < that->size(); ++i){
        for(int j = 0; j < contrast.size();j++){
            if (that->at(i) == contrast.at(j)){
                res << that->at(i);
                result << that->at(i);
            }
            else if(that->at(i).front() == recog){ //list의 첫 문자열과 인식된 문자열의 첫 글자를 비교. list의 첫 글자가 인식된 문자열의 처음과 다를 경우 제외
                if (that->at(i).contains(contrast.at(j)))
                    res << that->at(i);
            }
        }


    }

    for(int i = 0; i<res.size(); i++){
        QString c = str.back();
        auto a = c;
        a.append(" ");
        if(res.at(i).contains(a)){
            result << res.at(i);
        }
    }

    return result;
}

QStringList regExp(const QStringList *that){

    QStringList result;
    QRegularExpression r("(홍)([\\s]?)(길)([\\s]?)(동)(([\\s]([\\W]*))*)");

    for(int i = 0; i < that->size();i++){
        QRegularExpressionMatch match = r.match(that->at(i));
        if(match.hasMatch()){
            QString matched = match.captured(0);
            if(matched == that->at(i))
                //qDebug() << i;
                result << that->at(i);
        }

    }
    return result;

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString recogName = "홍길동";

    QStringList phonebookList;
        phonebookList << "홍 길 동";
        phonebookList << "홍길 동";
        phonebookList << "홍 길동";
        phonebookList << "홍길동";
        phonebookList << "나는 홍길동 이다.";
        phonebookList << "홍길동 형";
        phonebookList << "홍길동 누나";
        phonebookList << "홍길동 아버지";
        phonebookList << "홍 길동아버지";
        phonebookList << "홍길동친구";
        phonebookList << "미디어젠 홍길동 연구원";
        phonebookList << "홍길동 미디어젠 연구원";
        phonebookList << "홍 길동친 형";
        phonebookList << "홍길 동누나";
        phonebookList << "미디어젠 홍길동";
        phonebookList << "형 홍길동";
        phonebookList << "형 친구 홍길동";
        phonebookList << "홍길 동 누나";
        phonebookList << "홍길 동 형";
        phonebookList << "홍 길 동 누나" ;


     //recogName.insert(3,QString(" "));
    QStringList_filter(&phonebookList,recogName);
    qDebug() << "검색된 단어 : ";



    clock_t start, finish;
    double duration;



    start = clock();
    qDebug() << regExp(&phonebookList);
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    qDebug() << " regExp time : "<<duration << "초" ;



    start = clock();
    qDebug() << QStringList_filter(&phonebookList,recogName) ;
    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    qDebug() << " filter time : "<<duration << "초" ;


    qDebug() << "pb size : " << phonebookList.size();


    //dialog w;
    //w.show();

    return a.exec();
}
