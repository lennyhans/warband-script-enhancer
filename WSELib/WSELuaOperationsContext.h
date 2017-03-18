#pragma once

#include <unordered_map>
#include <lua.hpp>

#include "WSEOperationContext.h"


struct gameOperation
{
	unsigned int opcode;
	unsigned short flags;
};

#define maxGiterators 256

struct gameIterator
{
	bool valid;

	void(*advance)(gameIterator *it);
	bool(*curValIsValid)(gameIterator *it);

	int curVal;

	bool usePos;
	bool gridItSucc;
	wb::mission_grid_iterator grid_iterator;

	int subKindNo;
};

class WSELuaOperationsContext : public WSEOperationContext
{
	public:
		lua_State *luaState;
		int callTriggerOpcode;
		std::unordered_map<std::string, gameOperation> operationMap;

	public:
		WSELuaOperationsContext();
		void printLastError(const char *fileName = NULL);
		int gIteratorAdd(const gameIterator &it);
		gameIterator *getGiterator(size_t itNo);

	protected:
		std::vector<gameIterator> gIterators;

	protected:
		virtual void OnLoad();
		virtual void OnUnload();


		inline void initLua();

		void applyFlagListToOperationMap(std::unordered_map<std::string, std::vector<std::string>*> &flagLists, std::string listName, unsigned short flag, std::string opFile);
		inline void loadOperations();
		inline void initLGameTable();
		inline void doMainScript();
};