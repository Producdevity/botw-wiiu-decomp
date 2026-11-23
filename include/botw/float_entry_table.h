#ifndef BOTW_FLOAT_ENTRY_TABLE_H
#define BOTW_FLOAT_ENTRY_TABLE_H

struct FloatEntry {
    unsigned int unknown_00;
    unsigned int unknown_04;
    float value;
};
typedef char FloatEntrySize[sizeof(FloatEntry) == 12 ? 1 : -1];

struct FloatEntryTable {
    unsigned int unknown_00;
    unsigned int count;
    unsigned char unknown_08[8];
    FloatEntry* entries;
};

extern "C" float fn_03b970a8(const FloatEntryTable* table, unsigned int index);

#endif
