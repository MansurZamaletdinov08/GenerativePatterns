#pragma once


class SqlSelectQueryBuilder {
public: 
	SqlSelectQueryBuilder& AddColumn(std::string columName);
	SqlSelectQueryBuilder& AddFrom(std::string fromName);
	SqlSelectQueryBuilder& AddWhere(std::string columnName, std::string value);
	std::string BuildQuery();

protected:
	std::string columnName1 = "*";
	std::string tableName = "";
	std::string buildQuery = "SELECT";
};


class BuildQuery_ : public SqlSelectQueryBuilder {
public:
	SqlSelectQueryBuilder::AddColumn;
	SqlSelectQueryBuilder::AddFrom;
	SqlSelectQueryBuilder::AddWhere;
};