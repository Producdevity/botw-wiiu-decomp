#ifndef BOTW_STRING_INDEX_TABLE_H
#define BOTW_STRING_INDEX_TABLE_H

struct StringIndexNode {
    unsigned char unknown00[16];
};

struct StringIndexTable {
    unsigned char unknown00[24];
    StringIndexNode nodes[1];
};

typedef char StringIndexNodeSize[sizeof(StringIndexNode) == 16 ? 1 : -1];

#endif
