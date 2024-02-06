#include "SqlSelectQueryBuilder.h"
#include <iostream>


SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(std::string columnName) {
	if (true) {
		columnName1 = columnName;
	}

	return *this;
}


SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(std::string fromName) {
	tableName = fromName;
	return *this;
}


SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(std::string columnName, std::string value) {
    
}
