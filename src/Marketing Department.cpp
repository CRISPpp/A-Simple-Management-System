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
//菜单界面
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
    cout << "            //狗神保佑  \\\\\\\\" << endl;
    cout << "            `-._______.-'\n" << endl;
    cout << "            ___`. | .'___\n";
    cout << "           (______|______)\n" << endl;
    cout << "  =======================================================\n";
    cout << endl;
    cout << "=============欢迎来到营销运营部=============" << endl;
    cout << endl << "请输入即将执行的操作" << endl;
    cout << endl;
    cout << endl;
    while (a_end) {
    x:
        initgraph(1250, 885, SHOWCONSOLE);//设置界面窗口
    //设置背景
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//设置填充颜色
        settextcolor(RGB(0, 255, 13));
        settextstyle(50, 0, "楷体");
        outtextxy(190, 92, "营销运营部");//在窗口里写字
        //设置按钮
        fillrectangle(200, 215, 560, 270);
        settextcolor(BROWN);//设置文字颜色
        setbkmode(TRANSPARENT);//把字体设置成透明的
        //设置文字样式，大小，字体
        settextstyle(30, 0, "楷体");
        outtextxy(200, 220, "为文件添加订单信息");//在窗口里写字
        //设置按钮
        fillrectangle(760, 92, 1120, 142);
        outtextxy(760, 110, "修改密码");//在窗口里写字
        fillrectangle(200, 315, 560, 370);
        outtextxy(200, 330, "打印所有的订单信息");//在窗口里写字
        //设置按钮
        fillrectangle(200, 415, 560, 470);//左上角x，左上角y，右下角x，右下角y
        outtextxy(200, 430, "寻找目标订单信息");//在窗口里写字
        //设置按钮
        fillrectangle(200, 515, 560, 570);//左上角x，左上角y，右下角x，右下角y
        outtextxy(200, 530, "清空储存的订单信息");//在窗口里写字
            //设置按钮
        fillrectangle(200, 615, 560, 670);//左上角x，左上角y，右下角x，右下角y
        outtextxy(200, 630, "按编号或利润大小排序信息");//在窗口里写字
            //设置按钮
        fillrectangle(200, 715, 560, 770);//左上角x，左上角y，右下角x，右下角y
        outtextxy(200, 730, "预定会议室");//在窗口里写字

        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "计算最大的利益");//在窗口里写字
            //设置按钮
        fillrectangle(760, 315, 1120, 370);
        outtextxy(760, 330, "查询编号区间内利润最值");//在窗口里写字
        //设置按钮
        fillrectangle(760, 415, 1120, 470);//左上角x，左上角y，右下角x，右下角y
        outtextxy(760, 430, "修改路线或制定路线方案");//在窗口里写字
        //设置按钮
        fillrectangle(760, 515, 1120, 570);//左上角x，左上角y，右下角x，右下角y
        outtextxy(760, 530, "数独小游戏");//在窗口里写字
            //设置按钮
        fillrectangle(760, 615, 1120, 670);//左上角x，左上角y，右下角x，右下角y
        outtextxy(760, 630, "增加指定区间利润 ");//在窗口里写字
            //设置按钮
        fillrectangle(760, 715, 1120, 770);//左上角x，左上角y，右下角x，右下角y
        outtextxy(760, 730, "退出该系统 ");//在窗口里写字
        while (a_end) {
            if (MouseHit())//MouseHit()用来判断是否接受到鼠标消息
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //消息分发
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
    InputBox(s, 1000, "请输入追加数量");
    ll pp = change();
    while (pp--)
    {
        InputBox(s, 1000, "请输入订单编号");
        num = change();
        InputBox(s, 1000, "请输入订单价值");
        profit = change();
        os.write((char*)&num, sizeof(ll));
        os.write((char*)&profit, sizeof(ll));
    }
    num = -1;
    os.write((char*)&num, sizeof(ll));
    os.write((char*)&num, sizeof(ll));
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    os.close();
}

void  Marketing_Department::seek_information()
{
    ll target;
    InputBox(s, 1000, "请输入订单编号");
    target = change();
    ifstream is;
    is.open("test_market", ios::in | ios::binary);
    if (!is.good())
    {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
            setfillcolor(YELLOW);//设置填充颜色
            settextcolor(RGB(0, 255, 13));
            outtextxy(220, 210, "编号为：");
            string str_num = to_string(num);
            outtextxy(400, 210, str_num.c_str());
            outtextxy(500, 210, "的订单利润为:");
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "该用户不存在", "提示", MB_OKCANCEL);
    }
    else
    {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    }
    is.close();
}

void  Marketing_Department::print_information()
{

    ifstream is;
    is.open("test_market", ios::in | ios::binary);
    if (!is.good())
    {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
        return;
    }
    cleardevice();
    IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
    putimage(0, 0, &img);
    setfillcolor(YELLOW);//设置填充颜色
    settextcolor(RGB(0, 255, 13));
    ll num;
    ll profit;
    //do {
    //    is.read((char*)&num, sizeof(ll));
    //    if (num == -1)
    //        break;
    //    is.read((char*)&profit, sizeof(ll));
    //    cout << "编号为： " << num <<" 的订单利润为  "<< profit << endl;
    //} while (1);
    int m = 100;
    do {
        is.read((char*)&num, sizeof(ll));
        if (num == -1)
            break;
        string k1 = to_string(num);
        is.read((char*)&profit, sizeof(ll));
        string k2 = to_string(profit);
        outtextxy(200, m, "编号为：");//在窗口里写字
        outtextxy(350, m, k1.c_str());
        outtextxy(600, m, "的订单利润为");//在窗口里写字
        outtextxy(900, m, k2.c_str());
        m += 30;
    } while (1);
    getchar();
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    is.close();
}

void Marketing_Department::clear_information()
{

    ofstream os;
    os.open("test_market", ios::out | ios::binary);
    if (!os.good())
    {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
        return;
    }
    ll tmp = -1;
    os.write((char*)&tmp, sizeof(ll));
    os.write((char*)&tmp, sizeof(ll));

    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已清除全部信息", "提示", MB_OKCANCEL);
    os.close();
}

/**********************************************************
 **********************************************************
 * 由于资源有限，市场部门完成一批订单后不能立即就开始新的 *
 * 一批订单，即要休息一段时间，此时只能跳到下一次相邻的订 *
 * 单，依据记录的销售状况，获取最大获利的利益。           *
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
    /* cout  << "公司最大利益为： " << res << endl;
       for(auto a : dp) cout << a << " ";
       cout << endl;
    */

    cleardevice();
    IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
    putimage(0, 0, &img);
    setfillcolor(YELLOW);//设置填充颜色
    settextcolor(RGB(0, 255, 13));
    outtextxy(220, 210, "最大利润为：");
    string str_num = to_string(res);
    outtextxy(400, 210, str_num.c_str());
    outtextxy(220, 310, "选择过程为：");
    string pro;
    for (auto a : dp) {
        pro += to_string(a);
        pro += ' ';
    }
    outtextxy(400, 310, pro.c_str());
    getchar();
    closegraph();
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    is.close();
    os.close();
}

/**********************************************************
 **********************************************************
 *        查询指定编号区间内利润的最大值和最小值		  *
 **********************************************************
 ***********************************************************/

void   Marketing_Department::enquary_max_min_profit()
{

    //RMQ
    vector<vector<ll>> maxn(50010, vector<ll>(20, 0));
    vector<vector<ll>> minn(50010, vector<ll>(20, 0));
    ifstream is("test_market", ios::in | ios::binary);
    if (!is.good()) {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
    /*   cout << "请输入左区间的编号： ";
       while (cin >> x) {
           cout << "请输入右区间编号： ";
           cin >> y;
           x = tmp[x];
           y = tmp[y];
           ll z = 0;
           while ((1 << (z + 1)) <= y - x + 1) z++;
           int ans1 = max(maxn[x][z], maxn[y - (1 << z) + 1][z]),ans2 = min(minn[x][z], minn[y - (1 << z) + 1][z]);
           cout << "区间中最大价值为:  " << ans1 << endl;
           cout << "区间中最小价值为： " << ans2 << endl;
           cout << "请输入左区间的编号： ";
       }*/
    bool endd = 1;
    while (endd) {
    d:     cleardevice();
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//设置填充颜色
        settextcolor(RGB(0, 255, 13));
        settextcolor(BROWN);//设置文字颜色
        setbkmode(TRANSPARENT);//把字体设置成透明的
        //设置文字样式，大小，字体
        settextstyle(30, 0, "楷体");
        fillrectangle(200, 215, 560, 270);
        outtextxy(200, 220, "输入查询区间");//在窗口里写字
        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "退出");//在窗口里写字
        while (endd) {
            if (MouseHit())//MouseHit()用来判断是否接受到鼠标消息
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //消息分发
                switch (msg.uMsg)
                {
                case WM_LBUTTONDOWN:
                    if (msg.x > 200 && msg.x < 560 && msg.y>215 && msg.y < 270)
                    {

                        InputBox(s, 1000, "请输入左区间编号");
                        x = change();
                        InputBox(s, 1000, "请输入右区间编号");
                        y = change();
                        x = tmp[x];
                        y = tmp[y];
                        ll z = 0;
                        while ((1 << (z + 1)) <= y - x + 1) z++;
                        ll ans1 = max(maxn[x][z], maxn[y - (1 << z) + 1][z]), ans2 = min(minn[x][z], minn[y - (1 << z) + 1][z]);
                        cleardevice();
                        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
                        putimage(0, 0, &img);
                        setfillcolor(YELLOW);//设置填充颜色
                        settextcolor(RGB(0, 255, 13));
                        outtextxy(220, 210, "最大价值为");
                        string str_num = to_string(ans1);
                        outtextxy(400, 210, str_num.c_str());
                        outtextxy(500, 210, "最小价值为");
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
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    is.close();
}

/**********************************************************
 **********************************************************
 *公司需要对商品进行配送，输入城市和路线，计算最小消耗路径*
 **********************************************************
 ***********************************************************/

void Marketing_Department::shortest_path()
{

    //Dijkstra
    InputBox(s, 1000, "要重新输入城市数据吗？请输入YES或NO");
    string kk = s;
    if (kk == "YES") {
        ofstream os("GRAPH", ios::out);
        if (!os.good()) {
            //获取窗口句柄
            HWND hnd = GetHWnd();
            //弹出窗口提示用户操作
            int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
            return;
        }
        InputBox(s, 1000, "请输入出发城市或者输入END退出");
        string tmp = s;
        while (tmp != "END") {
            os << tmp << " ";
            InputBox(s, 1000, "请输入其他城市或者输入END退出");
            tmp = s;
        }
        os << "end" << " ";
        /* cout << "请输入边的起点城市，终点城市以及走过该段要耗费的资源： \n";
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
            InputBox(s, 1000, "请输入边的起点城市或者输入END退出");
            tmp = s;
            if (tmp == "END") break;
            InputBox(s, 1000, "请输入边的终点城市");
            tmp1 = s;
            InputBox(s, 1000, "请输入该路耗费的资源");
            resource = change();
            os << tmp << " " << tmp1 << " " << resource << " ";
        }
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "数据更新完毕", "提示", MB_OKCANCEL);
        os.close();
    }

    map<string, ll> mark;
    vector<string> gap;
    ll cnt = 1;
    ifstream is("GRAPH", ios::in);
    if (!is.good()) {
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
    setfillcolor(YELLOW);//设置填充颜色
    settextcolor(RGB(0, 255, 13));
    int m = 130;
    outtextxy(200, 100, "图的邻接矩阵为：");
    string k_tmp;
    for (int count_row = 0; count_row < cnt; count_row++, m += 30) {
        k_tmp.clear();
        for (int count_col = 0; count_col < cnt; count_col++) {
            if (arc[count_row][count_col] == 0x3f3f3f3f)
                k_tmp += "∞ ";
            else
                k_tmp += to_string(arc[count_row][count_col]), k_tmp += " ";
        }
        outtextxy(200, m, k_tmp.c_str());//在窗口里写字
    }

    getchar();
    /*  cout << "图的邻接矩阵为：" << endl;*/

    /*  for (int count_row = 0; count_row < cnt;count_row++) {

          for (int count_col = 0; count_col < cnt; count_col++) {
              if (arc[count_row][count_col] == 0x3f3f3f3f)
                  cout << "∞" << " ";
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
    //设置起点的到起点的路径为0
    dis[0].value = 0;
    dis[0].visit = true;

    int count = 1;
    //计算剩余的顶点的最短路径（剩余cnt-1个顶点）
    while (count != cnt) {
        //temp用于保存当前dis数组中最小的那个下标
        //min记录的当前的最小值
        int temp = 0;
        int min = 0x3f3f3f3f;
        for (i = 0; i < cnt; i++) {
            if (!dis[i].visit && dis[i].value < min) {
                min = dis[i].value;
                temp = i;
            }
        }
        //cout << temp + 1 << "  "<<min << endl;
        //把temp对应的顶点加入到已经找到的最短路径的集合中
        dis[temp].visit = true;
        ++count;
        for (i = 0; i < cnt; i++) {
            if (!dis[i].visit && arc[temp][i] != 0x3f3f3f3f && (dis[temp].value + arc[temp][i]) < dis[i].value) {
                //如果新得到的边可以影响其他为访问的顶点，那就就更新它的最短路径和长度
                dis[i].value = dis[temp].value + arc[temp][i];
                dis[i].path = dis[temp].path + "-->" + gap[i];
            }
        }
    }
    string str;
    str = gap[0];
    outtextxy(200, m, "最省资源路径为：");
    m += 30;
    /*   cout << "以" << str << "为起点的图的最省资源路径为：" << endl;*/
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
            p_tmp += "是无最短路径的";
        }
        outtextxy(200, m, p_tmp.c_str());
    }
    getchar();
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //弹出窗口提示用户操作
    int isok = MessageBox(hnd, "已完成", "提示", MB_OKCANCEL);
    is.close();
}

// 按编号或者价值对信息进行排序

void swap(pair<ll, ll>& a, pair<ll, ll>& b)
{
    pair<ll, ll> tmp = a;
    a = b;
    b = tmp;
    return;
}

// 快排

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

//归并排序

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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
        return;
    }
    InputBox(s, 1000, "按编号升序排序请输入： 1 ， 按价值升序排序请输入： 2 。");
    /*cout << "按编号升序排序请输入： 1 ， 按价值升序排序请输入： 2 。" << endl;*/
 /*   cout << "请输入： ";*/
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "已按编号升序排序", "提示", MB_OKCANCEL);
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
            //获取窗口句柄
            HWND hnd = GetHWnd();
            //弹出窗口提示用户操作
            int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "已按价值升序排序", "提示", MB_OKCANCEL);
    }
}

//会议室预定,假设公式共有100个会议室，每个会议室都有编号

void Marketing_Department::book_room() {

    InputBox(s, 1000, "初始化会议室数据吗？,请输入YES或者NO。");
    string aa = s;

    if (aa == "YES") {
        ll num = 1;
        bool a = 1;
        ofstream os("room_message", ios::binary | ios::out);
        if (!os.good())
        {
            //获取窗口句柄
            HWND hnd = GetHWnd();
            //弹出窗口提示用户操作
            int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
        //获取窗口句柄
        HWND hnd = GetHWnd();
        //弹出窗口提示用户操作
        int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
        InputBox(s, 1000, "请输入会议室号码：");
        num = change();
        if (tmp[num]) {
            InputBox(s, 1000, "该会议室可预定，请问要预定吗？ 请输入YES或NO。");
            string k;
            k = s;
            if (k == "YES") {
                unfind = 0;
                ofstream os("room_message", ios::binary | ios::out);
                if (!os.good())
                {
                    //获取窗口句柄
                    HWND hnd = GetHWnd();
                    //弹出窗口提示用户操作
                    int isok = MessageBox(hnd, "错误", "提示", MB_OKCANCEL);
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
                //获取窗口句柄
                HWND hnd = GetHWnd();
                //弹出窗口提示用户操作
                int isok = MessageBox(hnd, "预定完成", "提示", MB_OKCANCEL);
                unfind = 0;
                os.close();
            }
            else {
                InputBox(s, 1000, "是否取消预定？请输入YES或NO。");
                k = s;
                if (k == "YES")
                {
                    break;
                }
            }
        }
        else {
            InputBox(s, 1000, "该会议室已经被预定，是否取消预定？请输入YES或NO。");

            string k;
            k = s;
            if (k == "YES")
            {
                break;
            }
        }
    }
}

// 数独小游戏

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
        setfillcolor(YELLOW);//设置填充颜色
        settextcolor(RGB(0, 255, 13));
        outtextxy(200, 100, "原始数独为：");
        //cout << "原始的数独为： \n";
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

        //cout << "请输入您的答案： \n";
        for (int i = 0; i < 9; i++)
        {
            InputBox(s, 1000, "请按行输入您的答案");
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
            //获取窗口句柄
            HWND hnd = GetHWnd();
            //弹出窗口提示用户操作
            int isok = MessageBox(hnd, "恭喜，解答成功", "提示", MB_OKCANCEL);
            break;
        }
        else
        {
            string gg;
            InputBox(s, 1000, "错误答案，请问要继续尝试吗？请输入YES或NO");
            gg = s;
            if (gg == "NO") {
                cleardevice();
                IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
                putimage(0, 0, &img);
                setfillcolor(YELLOW);//设置填充颜色
                settextcolor(RGB(0, 255, 13));
                outtextxy(200, 100, "答案为：");
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
    /*  cout << "请输入左区间编号： \n";
      while (cin >> l ) {
          cout << "请输入右区间编号： \n";
          cin >> r;
          cout << "请输入增加的值： \n";
          cin >> c;
          insert(mark1[l], mark1[r], c,b);
          cout << "已完成\n";
          cout << "请输入左区间编号： \n";
      }*/
    bool endd = 1;
    while (endd) {
    d:     cleardevice();
        IMAGE img; loadimage(&img, "./a.jpg", 1250, 885);
        putimage(0, 0, &img);
        setfillcolor(YELLOW);//设置填充颜色
        settextcolor(RGB(0, 255, 13));
        settextcolor(BROWN);//设置文字颜色
        setbkmode(TRANSPARENT);//把字体设置成透明的
        //设置文字样式，大小，字体
        settextstyle(30, 0, "楷体");
        fillrectangle(200, 215, 560, 270);
        outtextxy(200, 220, "增加区间值");//在窗口里写字
        fillrectangle(760, 215, 1120, 270);
        outtextxy(760, 220, "退出");//在窗口里写字
        while (endd) {
            if (MouseHit())//MouseHit()用来判断是否接受到鼠标消息
            {
                //cleardevice();
                MOUSEMSG msg = GetMouseMsg();
                //消息分发
                switch (msg.uMsg)
                {
                case WM_LBUTTONDOWN:
                    if (msg.x > 200 && msg.x < 560 && msg.y>215 && msg.y < 270)
                    {

                        InputBox(s, 1000, "请输入左区间编号");
                        l = change();
                        InputBox(s, 1000, "请输入右区间编号");
                        r = change();
                        InputBox(s, 1000, "请输入增加的值");
                        c = change();
                        insert(mark1[l], mark1[r], c, b);
                        cleardevice();
                        //获取窗口句柄
                        HWND hnd = GetHWnd();
                        //弹出窗口提示用户操作
                        int isok = MessageBox(hnd, "该区间值已增加", "提示", MB_OKCANCEL);
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