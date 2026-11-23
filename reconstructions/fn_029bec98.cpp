#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048eebc;
extern "C" RuntimeTag data_1048eeb8;
extern "C" const RuntimeVTable data_1017c758;
extern "C" unsigned data_1048eeb4;
extern "C" RuntimeTag data_1048eeb0;
extern "C" const RuntimeVTable data_1017c768;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_1017c6f8;

typedef Pointer<&data_1048eebc, &data_1048eeb8, &data_1017c758> Type0;
typedef Pointer<&data_1048eeb4, &data_1048eeb0, &data_1017c768> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_1017c6f8> Type2;

static inline bool level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (Type0::is(other))
        return true;
    return level1(other);
}

extern "C" bool fn_029bec98(const void*, const RuntimeTag* other) {
    return level0(other);
}
