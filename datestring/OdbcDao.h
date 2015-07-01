#pragma once
#define ROW_ARRAY_SIZE 1000
class ODBCDao
{
public:
	const char* szDSN ;
	const char* szUID ;//log name
	const char* szAuthStr ;//passward
	SQLHENV  henv ;//���廷�����
	SQLHDBC  hdbc1 ;//�������ݿ����Ӿ��    
	SQLHSTMT  hstmt1 ;//���������
	RETCODE retcode;//���󷵻���
	ODBCDao(void);
	~ODBCDao(void);
	int insertInto(RowBean *bean);
	int getConn(void);
	int insertBulkInto(RowBean *bean);
	int insertbulkParamInto(RowBean *bean);
};

