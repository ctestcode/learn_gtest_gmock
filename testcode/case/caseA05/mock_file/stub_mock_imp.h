#define MOCK_CLASS TestMock

BEGIN_IMP_MOCK()
_IMP_getLevel(MOCK)
_IMP_PrintLevel(MOCK)
_IMP_Cleanup(MOCK)
END_IMP_MOCK()

#undef MOCK_CLASS
#define MOCK_CLASS TestStub

BEGIN_IMP_STUB()
END_IMP_STUB()
