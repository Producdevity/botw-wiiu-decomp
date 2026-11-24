#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_1048a880;
extern "C" RuntimeTag data_1048a884;
extern "C" const RuntimeVTable data_100a7768;
extern "C" unsigned data_1048a878;
extern "C" RuntimeTag data_1048a87c;
extern "C" const RuntimeVTable data_100a7758;
extern "C" unsigned data_1048a868;
extern "C" RuntimeTag data_1048a86c;
extern "C" const RuntimeVTable data_100a7748;
extern "C" unsigned data_10487528;
extern "C" RuntimeTag data_1048752c;
extern "C" const RuntimeVTable data_100a7738;
extern "C" unsigned data_10487520;
extern "C" RuntimeTag data_10487524;
extern "C" const RuntimeVTable data_100a7728;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_100a7718;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a7708;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a76f8;

typedef Token<&data_1048a880, &data_1048a884, &data_100a7768> Type0;
typedef Token<&data_1048a878, &data_1048a87c, &data_100a7758> Type1;
typedef Token<&data_1048a868, &data_1048a86c, &data_100a7748> Type2;
typedef Token<&data_10487528, &data_1048752c, &data_100a7738> Type3;
typedef Token<&data_10487520, &data_10487524, &data_100a7728> Type4;
typedef Token<&data_10487130, &data_10487158, &data_100a7718> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100a7708> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a76f8> Type7;

static inline unsigned level7(const RuntimeTag* other) {
    return (other == &Type7::get()) & 0xffu;
}

static inline bool level6(const RuntimeTag* other) {
    if (other == Type6::get())
        return true;
    return level7(other);
}

static inline bool level5(const RuntimeTag* other) {
    bool result = other == &Type5::get() ? true : level6(other);
    return result;
}

static inline unsigned level4(const RuntimeTag* other) {
    return other == &Type4::get() ? 1u : level5(other);
}

static inline bool level3(const RuntimeTag* other) {
    if (other == &Type3::get())
        return true;
    return level4(other);
}

static inline bool level2(const RuntimeTag* other) {
    return other == &Type2::get() ? true : level3(other);
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == &Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_023ec6e8(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
