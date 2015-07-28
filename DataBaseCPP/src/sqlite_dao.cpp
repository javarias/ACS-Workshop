#include <string>
#include <sqlite3.h>

#include "prepared_stmts_sqlite.h"
#include "sqlite_dao.h"

namespace acsws 
{

SQLite_DAO::SQLite_DAO(const std::string db_path)
{
	int ret = sqlite3_open(db_path.c_str(), ppDb);
	if (ret != SQLITE_OK)
		throw ret;
}

};
