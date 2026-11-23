#ifndef BOTW_LAZY_VEC3_H
#define BOTW_LAZY_VEC3_H

struct LazyVec3 {
    float values[3];
};

struct LazyVec3Owner {
    unsigned char unknown000[72];
    LazyVec3 value;
    unsigned char unknown054[267 - 84];
    unsigned char flags;
};

#endif
