#ifndef TRABALHO_CLASSSCHEDULE_H
#define TRABALHO_CLASSSCHEDULE_H

#include "Slot.h"
#include "UcClass.h"

class ClassSchedule {
    public:
        ClassSchedule();
        ClassSchedule(UcClass ucClass);
        ClassSchedule(string ucId, string classId);
        UcClass getUcClass() const;
        void addSlot(Slot slot);
        const vector<Slot> &getSlots() const;
        bool sameUC(ClassSchedule other) const;
        bool operator < (const ClassSchedule &other) const;
        bool operator == (const ClassSchedule &other) const;
        void print() const;

    private:
        UcClass ucClass;
        vector<Slot> slots;
};

#endif //TRABALHO_CLASSSCHEDULE_H
