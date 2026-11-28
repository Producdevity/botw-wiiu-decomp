struct BodyOwner;
extern "C" float fn_0348cd20(const BodyOwner* owner);

extern "C" float fn_0344b76c(void* object) {
    return fn_0348cd20(*(const BodyOwner**)((char*)object + 4));
}
