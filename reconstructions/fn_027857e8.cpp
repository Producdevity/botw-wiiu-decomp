#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cdac;
extern "C" RuntimeTag data_1048cda8;
extern "C" const RuntimeVTable data_1012bf0c;
extern "C" unsigned data_1048b82c;
extern "C" RuntimeTag data_1048b828;
extern "C" const RuntimeVTable data_1012befc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012beec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012bedc;

typedef Pointer<&data_1048cdac, &data_1048cda8, &data_1012bf0c> Type0;
typedef Pointer<&data_1048b82c, &data_1048b828, &data_1012befc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1012beec> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1012bedc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_027857e8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
