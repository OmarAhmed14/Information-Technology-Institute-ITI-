#ifndef CLINIC_SYSTEM_H
#define CLINIC_SYSTEM_H

typedef struct Clinic_System
{
	char name [20];
	int age;
	char gender [10]; 
	int id;
	struct Clinic_System* next;
}patient;

typedef struct slots
{
	int slot;
    int id;
    struct slots* next;

}slots;

static patient* New_Patient ();

void Add_Patient ();

static int Check_ID (int id);

void Print_Slots ();

void Edit_Data ();

void Patient_Reservation ();

void Cancel_Reservation ();

static slots* New_Slot ();

void Add_slot ();

static void Delete_Last ();

static void Delete_First ();

void Print_Basic_Infotmation ();

void Add_cancle_Slot();

#endif