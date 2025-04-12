#include<iostream>
#include "include/mysql.h"
using namespace std;

int main() {
    cout << "Hello, this is test2" << endl;
    MYSQL *mysql = mysql_init(0);
    if (!mysql) {
        cout << "MySQL initialization failed!" << endl;
        return 1;
    }
    
    if (!mysql_real_connect(mysql, "localhost", "root", "Dengni0425@xf", "db", 3306, NULL, 0)) {
        cout << "Connection failed: " << mysql_error(mysql) << endl;
        mysql_close(mysql);
        return 1;
    } else {
        cout << "Connection successful!" << endl;
    }
    const char *query = "SELECT * FROM student";
    if (mysql_query(mysql, query)) {
        cout << "Query failed: " << mysql_error(mysql) << endl;
        mysql_close(mysql);
        return 1;
    } else {
        // 获取查询结果
        MYSQL_RES *result = mysql_store_result(mysql);
        if (result) {
            // 获取列数
            int num_fields = mysql_num_fields(result);
            MYSQL_ROW row;

            // 遍历结果集
            while ((row = mysql_fetch_row(result))) {
                for (int i = 0; i < num_fields; i++) {
                    cout << (row[i] ? row[i] : "NULL") << "\t";
                }
                cout << endl;
            }
            mysql_free_result(result);
        } else {
            cout << "No results found or query did not return data." << endl;
        }
    }
    mysql_close(mysql);
    return 0;
}