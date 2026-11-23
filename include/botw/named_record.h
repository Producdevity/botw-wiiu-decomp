#ifndef BOTW_NAMED_RECORD_H
#define BOTW_NAMED_RECORD_H

struct NamedRecord {
    int field00;
    int field04;
    int field08;
    int field0C;
    int nameHandle;
    int field14;
    int field18;
    int unknown1C;
    const void* vtable;
};
typedef char NamedRecordSize[sizeof(NamedRecord) == 36 ? 1 : -1];

#endif
