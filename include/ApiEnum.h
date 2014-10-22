#ifndef _API_ENUM_H_
#define _API_ENUM_H_

//����״̬ö��
enum ConnectionStatus :char
{
	Uninitialized, //δ��ʼ��
	Initialized, //�Ѿ���ʼ��
	Disconnected, //�����Ѿ��Ͽ�
	Connecting, //������
	Connected, //���ӳɹ�
	Authorizing, //��Ȩ��
	Authorized, //��Ȩ�ɹ�
	Logining, //��¼��
	Logined, //��¼�ɹ�
	Confirming, //���㵥ȷ����
	Confirmed, //�Ѿ�ȷ��
	Doing,
	Done, //���
	Unknown, //δ֪
};

enum DataLevelType:char
{
	L0,
	L1,
	L5,
	L10,
	FULL,
};

enum ResumeType :char
{
	Restart,
	Resume,
	Quick,
};

enum PutCall :char
{
	Put,
	Call,
};

enum OrderStatus :char
{
	NotSent,
	PendingNew,
	New,
	Rejected,
	PartiallyFilled,
	Filled,
	PendingCancel,
	Cancelled,
	Expired,
	PendingReplace,
	Replaced,
};

enum OrderSide :char
{
	Buy,
	Sell,
};

enum OrderType :char
{
	Market,
	Stop,
	Limit,
	StopLimit,
	MarketOnClose,
	TrailingStop,
	TrailingStopLimit,
};

enum TimeInForce :char
{
	ATC,
	Day,
	GTC,
	IOC,
	OPG,
	OC,
	FOK,
	GTX,
	GTD,
	GFS,
};



enum PositionSide :char
{
	Long,
	Short,
};

enum ExecType : char
{
	ExecNew,
	ExecRejected,
	ExecTrade,
	ExecPendingCancel,
	ExecCancelled,
	ExecCancelReject,
	ExecPendingReplace,
	ExecReplace,
	ExecReplaceReject,
};

enum OpenCloseType :char
{
	Open,
	Close,
	CloseToday,
};

enum HedgeFlagType :char
{
	Speculation,
	Arbitrage,
	Hedge,
};

enum InstrumentType :char
{
	Stock,
	Future,
	Option,
	FutureOption,
	Bond,
	FX,
	Index,
	ETF,
	MultiLeg,
	Synthetic,
};

#endif