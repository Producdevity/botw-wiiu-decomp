extern "C" void fn_02c02d24(void* object, void* other) {
    if (other) {
        *(int*)other = *(int*)((char*)object + 1340);
    }
}
