#include "WSEDictionaryOperationsContext.h"

#include "WSE.h"
#include "warband.h"

int DictCreate(WSEDictionaryOperationsContext *context)
{
	return WSE->Objects.AllocObject(context->m_type, new WSEDictionary());
}

void DictDestroy(WSEDictionaryOperationsContext *context)
{
	int id;

	context->ExtractValue(id);

	WSEDictionary *dict = context->GetDictionary(id);
	
	delete dict;
	WSE->Objects.FreeObject(context->m_type, id);
}

void DictLoadFile(WSEDictionaryOperationsContext *context)
{
	int id, mode;
	std::string path;
	
	context->ExtractValue(id);
	context->ExtractPath(path);
	context->ExtractValue(mode);
	
	WSEDictionary *dict = context->GetDictionary(id);
	
	dict->Load(context->CreateFile(path, "wsedict"), mode);
}

void DictLoadDict(WSEDictionaryOperationsContext *context)
{
	int id1, id2, mode;
	
	context->ExtractValue(id1);
	context->ExtractValue(id2);
	context->ExtractValue(mode);
	
	WSEDictionary *dict1 = context->GetDictionary(id1);
	WSEDictionary *dict2 = context->GetDictionary(id2);

	dict1->Load(*dict2, mode);
}

void DictSave(WSEDictionaryOperationsContext *context)
{
	int id;
	std::string path;
	
	context->ExtractValue(id);
	context->ExtractPath(path);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->Save(context->CreateFile(path, "wsedict"));
}

void DictLoadFileJson(WSEDictionaryOperationsContext *context)
{
	int id, mode;
	std::string path;

	context->ExtractValue(id);
	context->ExtractPath(path);
	context->ExtractValue(mode);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->LoadJson(context->CreateFile(path, "json"), mode);
}

void DictSaveJson(WSEDictionaryOperationsContext *context)
{
	int id;
	std::string path;

	context->ExtractValue(id);
	context->ExtractPath(path);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->SaveJson(context->CreateFile(path, "json"));
}

void DictFromUrlEncodedJson(WSEDictionaryOperationsContext *context)
{
	int id, mode;
	std::string string;

	context->ExtractValue(id);
	context->ExtractString(string);
	context->ExtractValue(mode);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->FromUrlEncodedJson(string, mode);
}

void DictToUrlEncodedJson(WSEDictionaryOperationsContext *context)
{
	int sreg, id;

	context->ExtractValue(sreg);
	context->ExtractValue(id);

	WSEDictionary *dict = context->GetDictionary(id);

	warband->basic_game.string_registers[sreg] = dict->ToUrlEncodedJson();
}

void DictClear(WSEDictionaryOperationsContext *context)
{
	int id;
	
	context->ExtractValue(id);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->Clear();
}

void DictErase(WSEDictionaryOperationsContext *context)
{
	int id;
	std::string key;

	context->ExtractValue(id);
	context->ExtractString(key);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->Erase(key);
}

bool DictIsEmpty(WSEDictionaryOperationsContext *context)
{
	int id;
	
	context->ExtractValue(id);

	WSEDictionary *dict = context->GetDictionary(id);

	return dict->GetSize() == 0;
}

bool DictHasKey(WSEDictionaryOperationsContext *context)
{
	int id;
	std::string key;
	
	context->ExtractValue(id);
	context->ExtractString(key);

	WSEDictionary *dict = context->GetDictionary(id);

	return dict->Has(key);
}

int DictGetSize(WSEDictionaryOperationsContext *context)
{
	int id;
	
	context->ExtractValue(id);

	WSEDictionary *dict = context->GetDictionary(id);

	return dict->GetSize();
}

void DictDeleteFile(WSEDictionaryOperationsContext *context)
{
	std::string path;
	
	context->ExtractPath(path);

	DeleteFile(context->CreateFile(path, "wsedict").c_str());
}

void DictGetStr(WSEDictionaryOperationsContext *context)
{
	int sreg, id;
	std::string key, def;
	
	context->ExtractValue(sreg);
	context->ExtractValue(id);
	context->ExtractString(key);
	context->ExtractString(def);

	WSEDictionary *dict = context->GetDictionary(id);

	warband->basic_game.string_registers[sreg] = dict->GetString(key, def);
}

int DictGetInt(WSEDictionaryOperationsContext *context)
{
	int id, def;
	std::string key;
	
	context->ExtractValue(id);
	context->ExtractString(key);
	context->ExtractValue(def);

	WSEDictionary *dict = context->GetDictionary(id);

	return dict->GetInt(key, def);
}

void DictGetPos(WSEDictionaryOperationsContext *context)
{
	int id, preg, defPreg;
	std::string key;
	rgl::matrix  defPos;

	context->ExtractValue(preg);
	context->ExtractValue(id);
	context->ExtractString(key);

	if (context->HasMoreOperands()){
		context->ExtractRegister(defPreg);
		defPos = warband->basic_game.position_registers[defPreg];
	}
	else{
		defPos.initialize();
	}

	WSEDictionary *dict = context->GetDictionary(id);

	warband->basic_game.position_registers[preg] = dict->GetPos(key, defPos);
}

void DictSetStr(WSEDictionaryOperationsContext *context)
{
	int id;
	std::string key, value;
	
	context->ExtractValue(id);
	context->ExtractString(key);
	context->ExtractString(value);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->SetString(key, value);
}

void DictSetInt(WSEDictionaryOperationsContext *context)
{
	int id, value;
	std::string key;
	
	context->ExtractValue(id);
	context->ExtractString(key);
	context->ExtractValue(value);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->SetInt(key, value);
}

void DictSetPos(WSEDictionaryOperationsContext *context)
{
	int id, preg;
	std::string key;

	context->ExtractValue(id);
	context->ExtractString(key);
	context->ExtractRegister(preg);

	WSEDictionary *dict = context->GetDictionary(id);

	dict->SetPos(key, warband->basic_game.position_registers[preg]);
}

void DictGetKeyByIterator(WSEDictionaryOperationsContext *context)
{
	int sreg, id, iterator;

	context->ExtractValue(sreg);
	context->ExtractValue(id);
	context->ExtractValue(iterator);

	WSEDictionary *dict = context->GetDictionary(id);

	warband->basic_game.string_registers[sreg] = dict->GetKeyByIterator(iterator);
}

void DictDeleteFileJson(WSEDictionaryOperationsContext *context)
{
	std::string path;

	context->ExtractPath(path);

	DeleteFile(context->CreateFile(path, "json").c_str());
}

WSEDictionaryOperationsContext::WSEDictionaryOperationsContext() : WSEOperationContext("dictionary", 3200, 3299)
{
}

WSEDictionary *WSEDictionaryOperationsContext::GetDictionary(int id)
{
	WSEDictionary *dict = (WSEDictionary *)WSE->Objects.FetchObject(m_type, id);

	if (!dict)
		ScriptError("operand is not a valid dictionary");

	return dict;
}

void WSEDictionaryOperationsContext::OnLoad()
{
	m_type = WSE->Objects.AllocType("dictionary");

	RegisterOperation("dict_create", DictCreate, Both, Lhs, 1, 1,
		"Creates an empty dictionary object and stores it into <0>",
		"destination");
	
	RegisterOperation("dict_free", DictDestroy, Both, None, 1, 1,
		"Frees the dictionary object <0>. A dictionary can't be used after freeing it",
		"dict");

	RegisterOperation("dict_load_file", DictLoadFile, Both, None, 2, 3,
		"Loads a dictionary file into <0>. Setting <2> to 0 (default) clears <dict> and then loads the file, setting <2> to 1 doesn't clear <dict> but overrides any key that's already present, <2> to 2 doesn't clear <0> and doesn't overwrite keys that are already present",
		"dict", "file", "mode");

	RegisterOperation("dict_load_dict", DictLoadDict, Both, None, 2, 3,
		"Loads <1> into <0>. <2>: see above",
		"dict_1", "dict_2", "mode");

	RegisterOperation("dict_save", DictSave, Both, None, 2, 2,
		"Saves <0> into a file. For security reasons, <1> is just a name, not a full path, and will be stored into a WSE managed directory",
		"dict", "file");

	RegisterOperation("dict_clear", DictClear, Both, None, 1, 1,
		"Clears all key-value pairs from <0>",
		"dict");

	RegisterOperation("dict_is_empty", DictIsEmpty, Both, Cf, 1, 1,
		"Fails if <0> is not empty",
		"dict");

	RegisterOperation("dict_has_key", DictHasKey, Both, Cf, 2, 2,
		"Fails if <1> is not present in <0>",
		"dict", "key");

	RegisterOperation("dict_get_size", DictGetSize, Both, Lhs, 2, 2,
		"Stores the count of key-value pairs in <1> into <0>",
		"destination", "dict");

	RegisterOperation("dict_delete_file", DictDeleteFile, Both, None, 1, 1,
		"Deletes dictionary file <0> from disk",
		"file");

	RegisterOperation("dict_get_str", DictGetStr, Both, None, 3, 4,
		"Stores the string value paired to <2> into <0>. If the key is not found and <3> is set, <3> will be stored instead. If <3> is not set, an empty string will be stored",
		"string_register", "dict", "key", "default");

	RegisterOperation("dict_get_int", DictGetInt, Both, Lhs, 3, 4,
		"Stores the numeric value paired to <2> into <0>. If the key is not found and <3> is set, <3> will be stored instead. If <3> is not set, 0 will be stored",
		"destination", "dict", "key", "default");

	RegisterOperation("dict_set_str", DictSetStr, Both, None, 3, 3,
		"Adds (or changes) <2> as the string value paired to <1>",
		"dict", "key", "string_no");

	RegisterOperation("dict_set_int", DictSetInt, Both, None, 3, 3,
		"Adds (or changes) <2> as the numeric value paired to <1>",
		"dict", "key", "value");

	RegisterOperation("dict_get_key_by_iterator", DictGetKeyByIterator, Both, None, 3, 3,
		"Stores the key <0> by iterator <2>",
		"string_register", "dict", "iterator");

	RegisterOperation("dict_get_pos", DictGetPos, Both, None, 3, 4,
		"Stores the position paired to <2> into <0>. If the key is not found and <3> is set, <3> will be stored instead. If <3> is not set, (x:0,y:0,z:0,rotX:0,rotY:0,rotZ:0) will be stored",
		"position_register", "dict", "key", "default_position_register");

	RegisterOperation("dict_set_pos", DictSetPos, Both, None, 3, 3,
		"Adds (or changes) <2> as the position value paired to <1>",
		"dict", "key", "position_register");

	RegisterOperation("dict_load_file_json", DictLoadFileJson, Both, None, 2, 3,
		"Loads a dictionary json file into <0>. <2>: see above",
		"dict", "file", "mode");

	RegisterOperation("dict_save_json", DictSaveJson, Both, None, 2, 2,
		"Saves <0> into a json file. For security reasons, <1> is just a name, not a full path, and will be stored into a WSE managed directory",
		"dict", "file");

	RegisterOperation("dict_from_url_encoded_json", DictFromUrlEncodedJson, Both, None, 2, 3,
		"Loads a url encoded json <1> into <0>. <2>: see above",
		"dict", "string", "mode");

	RegisterOperation("dict_to_url_encoded_json", DictToUrlEncodedJson, Both, None, 2, 2,
		"Saves <1> into a url encoded json and stores into <0>",
		"string_register", "dict");

	RegisterOperation("dict_erase", DictErase, Both, None, 2, 2,
		"Removes value from <0> paired to <1>",
		"dict", "key");

	RegisterOperation("dict_delete_file_json", DictDeleteFileJson, Both, None, 1, 1,
		"Deletes dictionary json file <0> from disk",
		"file");
}

void WSEDictionaryOperationsContext::OnUnload()
{
	WSE->Objects.FreeType(m_type);
}
