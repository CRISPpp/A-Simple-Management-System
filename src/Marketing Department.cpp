#include"Marketing Department.h"
const int N = 1e6;

char s[N];


ll change() {
    ll res = 0;
    int i = 0;
    int n = 0;
    while (s[n]) n++;
    n--;
    while (s[i]) {
        res += (int)(s[i] - '0') * pow(10, n - i);
        i++;
    }
    return res;
}
//�˵�����
ll change(char* a) {
    int tmp;
    return 0;
}
void Marketing_Department::meanue()
{
    mciSendString("open ./b.mp3", 0, 0, 0);
    mciSendString("play ./b.mp3 repeat", 0, 0, 0);
    bool a_end = 1;
    system("cls");
    cout << "                 .----.\n";
    cout << "               _.'__    `.\n";
    cout << "           .--(^)(^^)---/#\\\\" << endl;
    cout << "         .' @          /###\\\\" << endl;
    cout << "         :         ,   #####\n";
    cout << "          `-..__.-' _.-\\\\###/\n";
    cout << "                `;_:    `\"'\n";
    cout << "             .'\"\"\"\"\"`.\n";
    cout << "             /,     ,\\\\\\\\" << endl;
    cout << "            //������  \\\\\\\\" << endl;
    cout << "            `-._______.-'\n" << endl;
    cout << "            ___`. | .'___\n";
    cout << "           (______|______)\n" << endl;
    cout << "  =======================================================\n";
    cout << endl;
    cout << "=============��ӭ����Ӫ����Ӫ��=============" << endl;
    cout << endl << "�����뼴��ִ�еĲ���" << endl;
    cout << endl;
    cout << endl;
    while (a_end) {
    x:
        initgraph(1250, 885, SHOWCONSOLE);//���ý��洰��
    //���ñ���
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//���������ɫ
        settextcolor(RGB(0, 255, 13));
        settextstyle(50, 0, "����");
        outtextxy(190, 92, "Ӫ����Ӫ��");//�ڴ�����д��
        //���ð�ť
        fillrectangle(200, 215, 560, 270);
        settextcolor(BROWN);//����������ɫ
        setbkmode(TRANSPARENT);//���������ó�͸����
        //����������ʽ����С������
        settextstyle(30, 0, "����");
        outtextxy(200, 220, "Ϊ�ļ���Ӷ�����Ϣ");//�ڴ�����д��
        //���ð�ť
        fillrectangle(760, 92, 1120, 142);
        outtextxy(760, 110, "�޸�����");//�ڴ�����д��
        fillrectangle(200, 315, 560, 370);
        outtextxy(200, 330, "��ӡ���еĶ�����Ϣ");//�ڴ�����д��
        //���ð�ť
        fillrectangle(200, 415, 560, 470);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(200, 430, "Ѱ��Ŀ�궩����Ϣ");//�ڴ�����д��
        //���ð�ť
        fillrectangle(200, 515, 560, 570);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(200, 530, "��մ���Ķ�����Ϣ");//�ڴ�����д��
            //���ð�ť
        fillrectangle(200, 615, 560, 670);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(200, 630, "����Ż������С������Ϣ");//�ڴ�����д��
            //���ð�ť
        fillrectangle(200, 715, 560, 770);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(200, 730, "Ԥ��������");//�ڴ�����д��

        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "������������");//�ڴ�����д��
            //���ð�ť
        fillrectangle(760, 315, 1120, 370);
        outtextxy(760, 330, "��ѯ���������������ֵ");//�ڴ�����д��
        //���ð�ť
        fillrectangle(760, 415, 1120, 470);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(760, 430, "�޸�·�߻��ƶ�·�߷���");//�ڴ�����д��
        //���ð�ť
        fillrectangle(760, 515, 1120, 570);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(760, 530, "����С��Ϸ");//�ڴ�����д��
            //���ð�ť
        fillrectangle(760, 615, 1120, 670);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(760, 630, "����ָ���������� ");//�ڴ�����д��
            //���ð�ť
        fillrectangle(760, 715, 1120, 770);//���Ͻ�x�����Ͻ�y�����½�x�����½�y
        outtextxy(760, 730, "�˳���ϵͳ ");//�ڴ�����д��
        while (a_end) {
            if (MouseHit())//MouseHit()�����ж��Ƿ���ܵ������Ϣ
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //��Ϣ�ַ�
                switch (msg.uMsg)
                {
                case WM_LBUTTONDOWN:
                    if (msg.x > 760 && msg.x < 1120 && msg.y>92 && msg.y < 142)
                    {

                        goto x;
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>215 && msg.y < 270)
                    {
                        get_information();
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>315 && msg.y < 370)
                    {
                        print_information();
                        goto x;
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>415 && msg.y < 470)
                    {
                        seek_information();
                        goto x;
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>515 && msg.y < 570)
                    {
                        clear_information();
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>615 && msg.y < 670)
                    {
                        sort_information();
                    }
                    if (msg.x > 200 && msg.x < 560 && msg.y>715 && msg.y < 770)
                    {
                        book_room();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>215 && msg.y < 270)
                    {
                        max_profit();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>315 && msg.y < 370)
                    {
                        enquary_max_min_profit();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>415 && msg.y < 470)
                    {
                        shortest_path();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>515 && msg.y < 570)
                    {
                        shudu_game();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>615 && msg.y < 670)
                    {
                        addprofit();
                        goto x;
                    }
                    if (msg.x > 760 && msg.x < 1120 && msg.y>715 && msg.y < 770)
                    {
                        a_end = 0;
                    }
                    break;
                case WM_RBUTTONDOWN:
                    break;
                }
            }
        }
    }


    closegraph();
}

void Marketing_Department::get_information()
{

    fstream os;
    os.open("test_market", ios::in | ios::out | ios::binary);
    if (!os.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    ll distance = 0;
    ll tmp = 0x3f3f3f3f;

    while (tmp != -1) {
        os.read((char*)&tmp, sizeof(ll));
        if (tmp == -1)break;
        distance += (sizeof(ll));
    }
    //cout << distance << endl;
    ll num;
    ll profit;
    os.seekp(distance, ios::beg);
    InputBox(s, 1000, "������׷������");
    ll pp = change();
    while (pp--)
    {
        InputBox(s, 1000, "�����붩�����");
        num = change();
        InputBox(s, 1000, "�����붩����ֵ");
        profit = change();
        os.write((char*)&num, sizeof(ll));
        os.write((char*)&profit, sizeof(ll));
    }
    num = -1;
    os.write((char*)&num, sizeof(ll));
    os.write((char*)&num, sizeof(ll));
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    os.close();
}

void  Marketing_Department::seek_information()
{
    ll target;
    InputBox(s, 1000, "�����붩�����");
    target = change();
    ifstream is;
    is.open("test_market", ios::in | ios::binary);
    if (!is.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    ll num;
    ll profit;
    bool unfind = 1;
    do {
        is.read((char*)&num, sizeof(ll));
        is.read((char*)&profit, sizeof(ll));
        if (num == target) {
            cleardevice();
            IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
            putimage(0, 0, &img);
            setfillcolor(YELLOW);//���������ɫ
            settextcolor(RGB(0, 255, 13));
            outtextxy(220, 210, "���Ϊ��");
            string str_num = to_string(num);
            outtextxy(400, 210, str_num.c_str());
            outtextxy(500, 210, "�Ķ�������Ϊ:");
            string str_pro = to_string(profit);
            outtextxy(800, 210, str_pro.c_str());
            getchar();
            closegraph();
            unfind = 0;
            break;
        }
        if (num == -1)
            break;
    } while (1);
    if (unfind)
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "���û�������", "��ʾ", MB_OKCANCEL);
    }
    else
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    }
    is.close();
}

void  Marketing_Department::print_information()
{

    ifstream is;
    is.open("test_market", ios::in | ios::binary);
    if (!is.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    cleardevice();
    IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
    putimage(0, 0, &img);
    setfillcolor(YELLOW);//���������ɫ
    settextcolor(RGB(0, 255, 13));
    ll num;
    ll profit;
    //do {
    //    is.read((char*)&num, sizeof(ll));
    //    if (num == -1)
    //        break;
    //    is.read((char*)&profit, sizeof(ll));
    //    cout << "���Ϊ�� " << num <<" �Ķ�������Ϊ  "<< profit << endl;
    //} while (1);
    int m = 100;
    do {
        is.read((char*)&num, sizeof(ll));
        if (num == -1)
            break;
        string k1 = to_string(num);
        is.read((char*)&profit, sizeof(ll));
        string k2 = to_string(profit);
        outtextxy(200, m, "���Ϊ��");//�ڴ�����д��
        outtextxy(350, m, k1.c_str());
        outtextxy(600, m, "�Ķ�������Ϊ");//�ڴ�����д��
        outtextxy(900, m, k2.c_str());
        m += 30;
    } while (1);
    getchar();
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    is.close();
}

void Marketing_Department::clear_information()
{

    ofstream os;
    os.open("test_market", ios::out | ios::binary);
    if (!os.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    ll tmp = -1;
    os.write((char*)&tmp, sizeof(ll));
    os.write((char*)&tmp, sizeof(ll));

    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����ȫ����Ϣ", "��ʾ", MB_OKCANCEL);
    os.close();
}

/**********************************************************
 **********************************************************
 * ������Դ���ޣ��г��������һ���������������Ϳ�ʼ�µ� *
 * һ����������Ҫ��Ϣһ��ʱ�䣬��ʱֻ��������һ�����ڵĶ� *
 * �������ݼ�¼������״������ȡ�����������档           *
 **********************************************************
 ***********************************************************/

void  Marketing_Department::max_profit()
{

    //DP
    ifstream is;
    ofstream os;
    is.open("test_market", ios::in | ios::binary);
    os.open("test_max_profit_ans", ios::out | ios::binary);
    if (!is.good() || !os.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    vector<int> nums;
    ll tmp;
    while (1)
    {
        is.seekg(sizeof(ll), ios::cur);
        is.read((char*)&tmp, sizeof(ll));
        if (tmp == -1)
            break;
        nums.push_back(tmp);
    }
    int len = nums.size();
    if (len == 0)
        return;
    vector<ll> dp(len);
    ll res = 0;
    for (int i = 0; i < len; i++)
    {
        if (i < 2)
        {
            dp[i] = nums[i];
        }
        else
        {
            ll temp = 0;
            for (int j = 0; j < i - 1; j++)
            {
                temp = max(temp, dp[j]);
            }
            dp[i] = temp + nums[i];
        }
        res = max(res, dp[i]);
    }
    os.write((char*)&res, sizeof(ll));
    /* cout  << "��˾�������Ϊ�� " << res << endl;
       for(auto a : dp) cout << a << " ";
       cout << endl;
    */

    cleardevice();
    IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
    putimage(0, 0, &img);
    setfillcolor(YELLOW);//���������ɫ
    settextcolor(RGB(0, 255, 13));
    outtextxy(220, 210, "�������Ϊ��");
    string str_num = to_string(res);
    outtextxy(400, 210, str_num.c_str());
    outtextxy(220, 310, "ѡ�����Ϊ��");
    string pro;
    for (auto a : dp) {
        pro += to_string(a);
        pro += ' ';
    }
    outtextxy(400, 310, pro.c_str());
    getchar();
    closegraph();
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    is.close();
    os.close();
}

/**********************************************************
 **********************************************************
 *        ��ѯָ�������������������ֵ����Сֵ		  *
 **********************************************************
 ***********************************************************/

void   Marketing_Department::enquary_max_min_profit()
{

    //RMQ
    vector<vector<ll>> maxn(50010, vector<ll>(20, 0));
    vector<vector<ll>> minn(50010, vector<ll>(20, 0));
    ifstream is("test_market", ios::in | ios::binary);
    if (!is.good()) {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    ll num = 0x3f3f3f3f;
    ll profit;
    ll mark = 1;
    map<ll, ll> tmp;
    while (num != -1) {
        is.read((char*)&num, sizeof(ll));
        is.read((char*)&profit, sizeof(ll));
        if (num == -1)
            break;
        tmp[num] = mark;
        maxn[mark][0] = minn[mark][0] = profit;
        mark++;
    }
    mark--;
    for (int j = 1; (1 << j) <= mark; j++)
        for (int i = 1; i + (1 << j) - 1 <= mark; i++) {
            maxn[i][j] = max(maxn[i][j - 1], maxn[i + (1 << (j - 1))][j - 1]);
            minn[i][j] = min(minn[i][j - 1], minn[i + (1 << (j - 1))][j - 1]);
        }
    ll x, y;
    /*   cout << "������������ı�ţ� ";
       while (cin >> x) {
           cout << "�������������ţ� ";
           cin >> y;
           x = tmp[x];
           y = tmp[y];
           ll z = 0;
           while ((1 << (z + 1)) <= y - x + 1) z++;
           int ans1 = max(maxn[x][z], maxn[y - (1 << z) + 1][z]),ans2 = min(minn[x][z], minn[y - (1 << z) + 1][z]);
           cout << "����������ֵΪ:  " << ans1 << endl;
           cout << "��������С��ֵΪ�� " << ans2 << endl;
           cout << "������������ı�ţ� ";
       }*/
    bool endd = 1;
    while (endd) {
    d:     cleardevice();
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//���������ɫ
        settextcolor(RGB(0, 255, 13));
        settextcolor(BROWN);//����������ɫ
        setbkmode(TRANSPARENT);//���������ó�͸����
        //����������ʽ����С������
        settextstyle(30, 0, "����");
        fillrectangle(200, 215, 560, 270);
        outtextxy(200, 220, "�����ѯ����");//�ڴ�����д��
        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "�˳�");//�ڴ�����д��
        while (endd) {
            if (MouseHit())//MouseHit()�����ж��Ƿ���ܵ������Ϣ
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //��Ϣ�ַ�
                switch (msg.uMsg)
                {
                case WM_LBUTTONDOWN:
                    if (msg.x > 200 && msg.x < 560 && msg.y>215 && msg.y < 270)
                    {

                        InputBox(s, 1000, "��������������");
                        x = change();
                        InputBox(s, 1000, "��������������");
                        y = change();
                        x = tmp[x];
                        y = tmp[y];
                        ll z = 0;
                        while ((1 << (z + 1)) <= y - x + 1) z++;
                        ll ans1 = max(maxn[x][z], maxn[y - (1 << z) + 1][z]), ans2 = min(minn[x][z], minn[y - (1 << z) + 1][z]);
                        cleardevice();
                        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
                        putimage(0, 0, &img);
                        setfillcolor(YELLOW);//���������ɫ
                        settextcolor(RGB(0, 255, 13));
                        outtextxy(220, 210, "����ֵΪ");
                        string str_num = to_string(ans1);
                        outtextxy(400, 210, str_num.c_str());
                        outtextxy(500, 210, "��С��ֵΪ");
                        string str_pro = to_string(ans2);
                        outtextxy(800, 210, str_pro.c_str());
                        getchar();
                        goto d;
                    }

                    if (msg.x > 760 && msg.x < 1120 && msg.y>215 && msg.y < 270)
                    {
                        closegraph();
                        endd = 0;
                        break;
                    }

                    break;
                case WM_RBUTTONDOWN:
                    break;
                }
            }
        }

    }
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    is.close();
}

/**********************************************************
 **********************************************************
 *��˾��Ҫ����Ʒ�������ͣ�������к�·�ߣ�������С����·��*
 **********************************************************
 ***********************************************************/

void Marketing_Department::shortest_path()
{

    //Dijkstra
    InputBox(s, 1000, "Ҫ�����������������������YES��NO");
    string kk = s;
    if (kk == "YES") {
        ofstream os("GRAPH", ios::out);
        if (!os.good()) {
            //��ȡ���ھ��
            HWND hnd = GetHWnd();
            //����������ʾ�û�����
            int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
            return;
        }
        InputBox(s, 1000, "������������л�������END�˳�");
        string tmp = s;
        while (tmp != "END") {
            os << tmp << " ";
            InputBox(s, 1000, "�������������л�������END�˳�");
            tmp = s;
        }
        os << "end" << " ";
        /* cout << "������ߵ������У��յ�����Լ��߹��ö�Ҫ�ķѵ���Դ�� \n";
         string tmp1;
         ll resource;
         while (cin >> tmp >> tmp1 >> resource) {
             os << tmp <<" "<< tmp1<<" " << resource<<" ";
         }
         cin.clear();*/
        string tmp1;
        ll resource;
        tmp = "aa";
        while (tmp != "END") {
            InputBox(s, 1000, "������ߵ������л�������END�˳�");
            tmp = s;
            if (tmp == "END") break;
            InputBox(s, 1000, "������ߵ��յ����");
            tmp1 = s;
            InputBox(s, 1000, "�������·�ķѵ���Դ");
            resource = change();
            os << tmp << " " << tmp1 << " " << resource << " ";
        }
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "���ݸ������", "��ʾ", MB_OKCANCEL);
        os.close();
    }

    map<string, ll> mark;
    vector<string> gap;
    ll cnt = 1;
    ifstream is("GRAPH", ios::in);
    if (!is.good()) {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    string tmp = "a";
    while (tmp != "end") {
        is >> tmp;
        if (tmp == "end") {
            break;
        }
        gap.push_back(tmp);
        mark[tmp] = cnt++;
    }
    cnt--;
    vector<vector<ll>> arc(cnt, vector<ll>(cnt, 0x3f3f3f3f));
    string tmp1;
    ll resource;
    while (is >> tmp >> tmp1 >> resource) {
        arc[mark[tmp] - 1][mark[tmp1] - 1] = resource;
    }
    cleardevice();
    IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
    putimage(0, 0, &img);
    setfillcolor(YELLOW);//���������ɫ
    settextcolor(RGB(0, 255, 13));
    int m = 130;
    outtextxy(200, 100, "ͼ���ڽӾ���Ϊ��");
    string k_tmp;
    for (int count_row = 0; count_row < cnt; count_row++, m += 30) {
        k_tmp.clear();
        for (int count_col = 0; count_col < cnt; count_col++) {
            if (arc[count_row][count_col] == 0x3f3f3f3f)
                k_tmp += "�� ";
            else
                k_tmp += to_string(arc[count_row][count_col]), k_tmp += " ";
        }
        outtextxy(200, m, k_tmp.c_str());//�ڴ�����д��
    }

    getchar();
    /*  cout << "ͼ���ڽӾ���Ϊ��" << endl;*/

    /*  for (int count_row = 0; count_row < cnt;count_row++) {

          for (int count_col = 0; count_col < cnt; count_col++) {
              if (arc[count_row][count_col] == 0x3f3f3f3f)
                  cout << "��" << " ";
              else
                  cout << arc[count_row][count_col] << " ";
          }
          cout << endl;
      }*/
    struct Dis {
        string path;
        int value;
        bool visit;
        Dis() {
            visit = false;
            value = 0;
            path = "";
        }
    };
    Dis* dis = new Dis[cnt];
    int i;
    for (i = 0; i < cnt; i++) {
        dis[i].path = gap[0] + "-->" + gap[i];
        dis[i].value = arc[0][i];
    }
    //�������ĵ�����·��Ϊ0
    dis[0].value = 0;
    dis[0].visit = true;

    int count = 1;
    //����ʣ��Ķ�������·����ʣ��cnt-1�����㣩
    while (count != cnt) {
        //temp���ڱ��浱ǰdis��������С���Ǹ��±�
        //min��¼�ĵ�ǰ����Сֵ
        int temp = 0;
        int min = 0x3f3f3f3f;
        for (i = 0; i < cnt; i++) {
            if (!dis[i].visit && dis[i].value < min) {
                min = dis[i].value;
                temp = i;
            }
        }
        //cout << temp + 1 << "  "<<min << endl;
        //��temp��Ӧ�Ķ�����뵽�Ѿ��ҵ������·���ļ�����
        dis[temp].visit = true;
        ++count;
        for (i = 0; i < cnt; i++) {
            if (!dis[i].visit && arc[temp][i] != 0x3f3f3f3f && (dis[temp].value + arc[temp][i]) < dis[i].value) {
                //����µõ��ı߿���Ӱ������Ϊ���ʵĶ��㣬�Ǿ;͸����������·���ͳ���
                dis[i].value = dis[temp].value + arc[temp][i];
                dis[i].path = dis[temp].path + "-->" + gap[i];
            }
        }
    }
    string str;
    str = gap[0];
    outtextxy(200, m, "��ʡ��Դ·��Ϊ��");
    m += 30;
    /*   cout << "��" << str << "Ϊ����ͼ����ʡ��Դ·��Ϊ��" << endl;*/
    for (int i = 0; i < cnt; i++, m += 30) {
        string p_tmp;
        if (dis[i].value != 0x3f3f3f3f) {
            p_tmp += dis[i].path;
            p_tmp += "=";
            p_tmp += to_string(dis[i].value);
            //cout << dis[i].path << "=" << dis[i].value << endl;
        }
        else {
            p_tmp += dis[i].path;
            p_tmp += "�������·����";
        }
        outtextxy(200, m, p_tmp.c_str());
    }
    getchar();
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //����������ʾ�û�����
    int isok = MessageBox(hnd, "�����", "��ʾ", MB_OKCANCEL);
    is.close();
}

// ����Ż��߼�ֵ����Ϣ��������

void swap(pair<ll, ll>& a, pair<ll, ll>& b)
{
    pair<ll, ll> tmp = a;
    a = b;
    b = tmp;
    return;
}

// ����

void quick_sort(vector<pair<ll, ll>>& a, ll l, ll r)
{
    if (l >= r)
    {
        return;
    }
    else
    {
        ll mid = l + r >> 1;
        ll x = a[mid].first;
        ll j = l - 1;
        ll i = r + 1;
        while (j < i) {
            do
            {
                j++;
            } while (a[j].first < x);
            do
            {
                i--;
            } while (a[i].first > x);
            if (j < i)
            {
                swap(a[i], a[j]);
            }
        }
        quick_sort(a, l, i);
        quick_sort(a, i + 1, r);
    }
    return;
}

//�鲢����

void merge_sort(vector <pair<ll, ll>>& a, ll l, ll r)
{
    if (l >= r)
    {
        return;
    }
    else
    {
        ll mid = l + r >> 1;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        ll n = a.size();
        vector<pair<ll, ll>> tmp(n);
        ll i = l;
        ll j = mid + 1;
        ll k = 0;
        while (i <= mid && j <= r)
        {
            if (a[i] <= a[j])
            {
                tmp[k++] = a[i++];
            }
            else
            {
                tmp[k++] = a[j++];
            }
        }
        while (i <= mid)
        {
            tmp[k++] = a[i++];
        }
        while (j <= r)
        {
            tmp[k++] = a[j++];
        }
        for (i = l, k = 0; i <= r; i++, k++)
        {
            a[i] = tmp[k];
        }
    }
    return;
}

void Marketing_Department::sort_information()
{
    vector<pair<ll, ll>> tmp;
    pair<ll, ll> mark;
    ll num, profit;
    ifstream is("test_market", ios::binary | ios::in);
    if (!is.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    InputBox(s, 1000, "������������������룺 1 �� ����ֵ�������������룺 2 ��");
    /*cout << "������������������룺 1 �� ����ֵ�������������룺 2 ��" << endl;*/
 /*   cout << "�����룺 ";*/
    int a;
    a = change();
    if (a == 1) {

        while (1)
        {
            is.read((char*)&num, sizeof(ll));
            is.read((char*)&profit, sizeof(ll));
            if (num == -1)
            {
                break;
            }
            else
            {
                mark = { num,profit };
                tmp.push_back(mark);
            }
        }
        if (tmp.size() > 1e8)
        {
            merge_sort(tmp, 0, tmp.size() - 1);
        }
        else
        {
            quick_sort(tmp, 0, tmp.size() - 1);
        }

        ofstream os("test_market", ios::out | ios::binary);
        for (ll i = 0; i < tmp.size(); i++)
        {
            num = tmp[i].first;
            profit = tmp[i].second;
            os.write((char*)&num, sizeof(ll));
            os.write((char*)&profit, sizeof(ll));

        }

        num = -1;
        profit = -1;

        os.write((char*)&num, sizeof(ll));
        os.write((char*)&profit, sizeof(ll));

        is.close();
        os.close();
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "�Ѱ������������", "��ʾ", MB_OKCANCEL);
    }

    if (a == 2)
    {
        while (1)
        {
            is.read((char*)&num, sizeof(ll));
            is.read((char*)&profit, sizeof(ll));
            if (num == -1)
            {
                break;
            }
            else
            {
                mark = { profit,num };
                tmp.push_back(mark);
            }
        }
        if (tmp.size() > 1e8)
        {
            merge_sort(tmp, 0, tmp.size() - 1);
        }
        else
        {
            quick_sort(tmp, 0, tmp.size() - 1);
        }

        ofstream os("test_market", ios::out | ios::binary);
        if (!os.good())
        {
            //��ȡ���ھ��
            HWND hnd = GetHWnd();
            //����������ʾ�û�����
            int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
            return;
        }
        for (ll i = 0; i < tmp.size(); i++)
        {
            num = tmp[i].second;
            profit = tmp[i].first;
            os.write((char*)&num, sizeof(ll));
            os.write((char*)&profit, sizeof(ll));

        }

        num = -1;
        profit = -1;

        os.write((char*)&num, sizeof(ll));
        os.write((char*)&profit, sizeof(ll));

        is.close();
        os.close();
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "�Ѱ���ֵ��������", "��ʾ", MB_OKCANCEL);
    }
}

//������Ԥ��,���蹫ʽ����100�������ң�ÿ�������Ҷ��б��

void Marketing_Department::book_room() {

    InputBox(s, 1000, "��ʼ��������������,������YES����NO��");
    string aa = s;

    if (aa == "YES") {
        ll num = 1;
        bool a = 1;
        ofstream os("room_message", ios::binary | ios::out);
        if (!os.good())
        {
            //��ȡ���ھ��
            HWND hnd = GetHWnd();
            //����������ʾ�û�����
            int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
            return;
        }
        while (num <= 100)
        {
            os.write((char*)&num, sizeof(ll));
            os.write((char*)&a, sizeof(bool));
            num++;
        }
        num = -1;
        os.write((char*)&num, sizeof(ll));
    }

    ll num;
    bool a;
    ifstream is("room_message", ios::binary | ios::in);
    if (!is.good())
    {
        //��ȡ���ھ��
        HWND hnd = GetHWnd();
        //����������ʾ�û�����
        int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
        return;
    }
    vector<bool> tmp(101);
    for (int i = 1; i <= 100; i++)
    {
        is.read((char*)&num, sizeof(ll));
        is.read((char*)&a, sizeof(bool));
        tmp[num] = a;
    }
    bool unfind = 1;
    while (unfind)
    {
        InputBox(s, 1000, "����������Һ��룺");
        num = change();
        if (tmp[num]) {
            InputBox(s, 1000, "�û����ҿ�Ԥ��������ҪԤ���� ������YES��NO��");
            string k;
            k = s;
            if (k == "YES") {
                unfind = 0;
                ofstream os("room_message", ios::binary | ios::out);
                if (!os.good())
                {
                    //��ȡ���ھ��
                    HWND hnd = GetHWnd();
                    //����������ʾ�û�����
                    int isok = MessageBox(hnd, "����", "��ʾ", MB_OKCANCEL);
                    return;
                }
                tmp[num] = 0;
                ll kk = 1;
                while (kk <= 100)
                {
                    a = tmp[kk];
                    os.write((char*)&kk, sizeof(ll));
                    os.write((char*)&a, sizeof(bool));
                    kk++;
                }
                num = -1;
                os.write((char*)&num, sizeof(ll));
                //��ȡ���ھ��
                HWND hnd = GetHWnd();
                //����������ʾ�û�����
                int isok = MessageBox(hnd, "Ԥ�����", "��ʾ", MB_OKCANCEL);
                unfind = 0;
                os.close();
            }
            else {
                InputBox(s, 1000, "�Ƿ�ȡ��Ԥ����������YES��NO��");
                k = s;
                if (k == "YES")
                {
                    break;
                }
            }
        }
        else {
            InputBox(s, 1000, "�û������Ѿ���Ԥ�����Ƿ�ȡ��Ԥ����������YES��NO��");

            string k;
            k = s;
            if (k == "YES")
            {
                break;
            }
        }
    }
}

// ����С��Ϸ

bool isnum(char a)
{
    if (a >= '0' && a <= '9')return true;
    return false;
}

bool shu_right = false;
bool shu_b[9][9];
bool shu_r[9][9];
bool shu_c[9][9];

void digui(vector<vector<char>>& board, int row, int col)
{
    if (row > 8)
    {
        shu_right = true;
        return;
    }
    else
    {
        if (isnum(board[row][col]))
        {
            if (col < 8)
            {
                digui(board, row, col + 1);
            }
            else
            {
                digui(board, row + 1, 0);
            }
        }
        else
        {
            for (int k = 0; k <= 8; k++)
            {
                if (!shu_b[row / 3 * 3 + col / 3][k] && !shu_r[row][k] && !shu_c[col][k])
                {
                    board[row][col] = k + 1 + '0';
                    shu_b[row / 3 * 3 + col / 3][k] = true;
                    shu_r[row][k] = true;
                    shu_c[col][k] = true;
                    if (col < 8)
                    {
                        digui(board, row, col + 1);
                    }
                    else
                    {
                        digui(board, row + 1, 0);
                    }
                    if (!shu_right)
                    {
                        board[row][col] = '.';
                        shu_b[row / 3 * 3 + col / 3][k] = false;
                        shu_r[row][k] = false;
                        shu_c[col][k] = false;
                    }
                }
            }
        }
    }
}

void solveSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (isnum(board[i][j]))shu_r[i][board[i][j] - '0' - 1] = true, shu_c[j][board[i][j] - '0' - 1] = true, shu_b[i / 3 * 3 + j / 3][board[i][j] - '0' - 1] = true;
    digui(board, 0, 0);
    return;
}

bool shu_check(vector<vector<char>> a, vector<vector<char>> b) {
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

void Marketing_Department::shudu_game()
{
    vector<vector<char>> old{ {'5','3','.','.','7','.','.','.','.'} ,{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'} };

    vector<vector<char>> res = old;
    solveSudoku(res);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    bool unsolve = 1;
    while (unsolve) {

        shu_right = false;
        vector<vector<char>> tmp(9);
        int m = 130;
        cleardevice();
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//���������ɫ
        settextcolor(RGB(0, 255, 13));
        outtextxy(200, 100, "ԭʼ����Ϊ��");
        //cout << "ԭʼ������Ϊ�� \n";
        for (int i = 0; i < 9; i++, m += 30)
        {
            string o_tmp;
            for (int j = 0; j < 9; j++)
            {
                if (isnum(old[i][j]))
                {
                    o_tmp += old[i][j];

                    /* cout << old[i][j];*/
                }
                else {
                    o_tmp += "?";
                }
                o_tmp += " ";
            }
            outtextxy(200, m, o_tmp.c_str());
        }

        //cout << "���������Ĵ𰸣� \n";
        for (int i = 0; i < 9; i++)
        {
            InputBox(s, 1000, "�밴���������Ĵ�");
            int j = 0;
            while (s[j]) {
                if (isnum(s[j])) {
                    tmp[i].push_back(s[j]);
                }
                j++;
            }

        }
        /*      for (auto a : tmp) {
                  for (auto b : a) {
                      cout << b << " ";
                  }
                  cout << endl;
              }*/
        if (shu_check(res, tmp)) {
            //��ȡ���ھ��
            HWND hnd = GetHWnd();
            //����������ʾ�û�����
            int isok = MessageBox(hnd, "��ϲ�����ɹ�", "��ʾ", MB_OKCANCEL);
            break;
        }
        else
        {
            string gg;
            InputBox(s, 1000, "����𰸣�����Ҫ����������������YES��NO");
            gg = s;
            if (gg == "NO") {
                cleardevice();
                IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
                putimage(0, 0, &img);
                setfillcolor(YELLOW);//���������ɫ
                settextcolor(RGB(0, 255, 13));
                outtextxy(200, 100, "��Ϊ��");
                m = 130;
                for (int i = 0; i < 9; i++, m += 30)
                {
                    string o_tmp;
                    for (int j = 0; j < 9; j++)
                    {

                        o_tmp += res[i][j];
                        o_tmp += " ";
                        /* cout << old[i][j];*/

                    }
                    outtextxy(200, m, o_tmp.c_str());
                }
                cin.clear();
                getchar();
                break;
            }
        }
    }
}

void insert(int l, int r, int c, vector<ll>& b)
{
    b[l] += c;
    b[r + 1] -= c;
}

void Marketing_Department::addprofit() {
    vector<ll> tmp(1, 0);
    ifstream is("test_market", ios::binary | ios::in);
    ll num, profit, k = 1;
    map<ll, ll> mark1, mark2;

    while (1)
    {
        is.read((char*)&num, sizeof(ll));
        is.read((char*)&profit, sizeof(ll));
        if (num == -1)break;
        tmp.push_back(profit);
        mark2[k] = num;
        mark1[num] = k++;
    }
    ll n = tmp.size() - 1;
    vector<ll> b(n + 2, 0);
    for (int i = 1; i <= n; i++)
        insert(i, i, tmp[i], b);
    ll l, r, c;
    /*  cout << "�������������ţ� \n";
      while (cin >> l ) {
          cout << "�������������ţ� \n";
          cin >> r;
          cout << "���������ӵ�ֵ�� \n";
          cin >> c;
          insert(mark1[l], mark1[r], c,b);
          cout << "�����\n";
          cout << "�������������ţ� \n";
      }*/
    bool endd = 1;
    while (endd) {
    d:     cleardevice();
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//���������ɫ
        settextcolor(RGB(0, 255, 13));
        settextcolor(BROWN);//����������ɫ
        setbkmode(TRANSPARENT);//���������ó�͸����
        //����������ʽ����С������
        settextstyle(30, 0, "����");
        fillrectangle(200, 215, 560, 270);
        outtextxy(200, 220, "��������ֵ");//�ڴ�����д��
        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "�˳�");//�ڴ�����д��
        while (endd) {
            if (MouseHit())//MouseHit()�����ж��Ƿ���ܵ������Ϣ
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //��Ϣ�ַ�
                switch (msg.uMsg)
                {
                case WM_LBUTTONDOWN:
                    if (msg.x > 200 && msg.x < 560 && msg.y>215 && msg.y < 270)
                    {

                        InputBox(s, 1000, "��������������");
                        l = change();
                        InputBox(s, 1000, "��������������");
                        r = change();
                        InputBox(s, 1000, "���������ӵ�ֵ");
                        c = change();
                        insert(mark1[l], mark1[r], c, b);
                        cleardevice();
                        //��ȡ���ھ��
                        HWND hnd = GetHWnd();
                        //����������ʾ�û�����
                        int isok = MessageBox(hnd, "������ֵ������", "��ʾ", MB_OKCANCEL);
                        goto d;
                    }

                    if (msg.x > 760 && msg.x < 1120 && msg.y>215 && msg.y < 270)
                    {
                        closegraph();
                        endd = 0;
                        break;
                    }

                    break;
                case WM_RBUTTONDOWN:
                    break;
                }
            }
        }

    }
    for (int i = 1; i <= n; i++) b[i] += b[i - 1];
    ofstream os("test_market", ios::binary | ios::out);
    for (int i = 1; i <= n; i++) {
        num = mark2[i];
        profit = b[i];
        os.write((char*)&num, sizeof(ll));
        os.write((char*)&profit, sizeof(ll));
    }
    num = profit = -1;
    os.write((char*)&num, sizeof(ll));
    os.write((char*)&profit, sizeof(ll));
    os.close();
    is.close();
}