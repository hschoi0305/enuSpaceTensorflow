#include "stdafx.h"
#include "GlobalHeader.h"

std::map<std::string, ObjectInfo* > m_ObjectMapList;
std::map<std::string, FetchInfo* > m_RunMapList;
Scope* m_pScope = nullptr;								// set the current scope node pointer.

std::map<std::string, int>	m_SymbolList;