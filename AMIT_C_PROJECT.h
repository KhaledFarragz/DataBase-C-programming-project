#ifndef AMIT_C_PROJECT_H_
#define AMIT_C_PROJECT_H_

struct student
{
    int  ID;
    int  Year;
    char C1ID[5];
    int  C1G;
    char C2ID[5];
    int  C2G;
    char C3ID[5];
    int  C3G;
}s[10];

#endif

void SDB_IsFull();

void SDB_GetUsedSize();

void SDB_AddEntry(int, int);

void SDB_DeleteEntry(int);

void SDB_ReadEntry();

void SDB_GetIdList();

void SDB_IsIdExist(int);




