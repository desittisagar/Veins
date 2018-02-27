packet WaveShortMessage {
	//Version of the Wave Short Message
	int wsmVersion = 0;
	//Determine which security mechanism was used
	int securityType = 0;
	//Channel Number on which this packet was sent
	int channelNumber;
	//Data rate with which this packet was sent
	int dataRate = 1;
	//User priority with which this packet was sent (note the AC mapping rules in Mac1609_4::mapUserPriority)
	int userPriority = 7;
	//Unique number to identify the service
	int psid = 0;
	//Provider Service Context
	string psc = "Service with some Data";
	//Length of Wave Short Message
	int wsmLength;
	//Data of Wave Short Message
	string wsmData = "Some Data";

	int senderAddress = 0;
	int recipientAddress = -1;
	int serial = 0;
//	string rid;
	string wrid;
	simtime_t timestamp = 0;
	simtime_t delay;
	bool fl;
	int hop;
}