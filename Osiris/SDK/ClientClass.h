#pragma once

//class ClientClass;
class IClientNetworkable;

typedef ClientNetworkable* (*CreateClientClassFn)(int entnum, int serialNum);
typedef ClientNetworkable* (*CreateEventFn)();

class ClientClass {
public:
    CreateClientClassFn      m_pCreateFn;
    CreateEventFn            m_pCreateEventFn;
    char*                    m_pNetworkName;
    void* /* RecvTable* */               m_pRecvTable;
    ClientClass*             m_pNext;
    ClassId                  m_ClassID;
};