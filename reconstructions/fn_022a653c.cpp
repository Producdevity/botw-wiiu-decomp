#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_10489654;
extern "C" RuntimeTag data_10489650;
extern "C" const RuntimeVTable data_100715ec;
extern "C" unsigned data_1048964c;
extern "C" RuntimeTag data_10489648;
extern "C" const RuntimeVTable data_100715dc;
extern "C" unsigned data_104877bc;
extern "C" RuntimeTag data_104877c0;
extern "C" const RuntimeVTable data_100715cc;
extern "C" unsigned data_1048739c;
extern "C" RuntimeTag data_104873a0;
extern "C" const RuntimeVTable data_100715bc;
extern "C" unsigned data_10487388;
extern "C" RuntimeTag data_10487384;
extern "C" const RuntimeVTable data_100715ac;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_1007159c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007158c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007157c;

typedef Token<&data_10489654, &data_10489650, &data_100715ec> Type0;
typedef Token<&data_1048964c, &data_10489648, &data_100715dc> Type1;
typedef Token<&data_104877bc, &data_104877c0, &data_100715cc> Type2;
typedef Token<&data_1048739c, &data_104873a0, &data_100715bc> Type3;
typedef Token<&data_10487388, &data_10487384, &data_100715ac> Type4;
typedef Token<&data_10487130, &data_10487158, &data_1007159c> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1007158c> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007157c> Type7;

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

extern "C" bool fn_022a653c(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
