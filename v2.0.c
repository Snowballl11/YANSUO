#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>
//slowprintf("\n");

#define MAX_SIZE 1024

void slowprintf(char src[MAX_SIZE])
{
    int len;
    len = strlen(src);
    for (int i = 0; i < len; i++)
    {
        printf("%c", src[i]);
        Sleep(15);
    }
}

int main(void)
{
    char choose;
    char name[1024];
    int begin, end, end_1;
    begin = time(NULL);

    printf("柳暗\n");
    slowprintf("（注：本故事由真实案件改编而成，所有选项依据现实选择为最快的通关方式。）\n");
    printf("【1】开始游戏\n");
    printf("【2】制作人员表\n");
    printf("【3】获取最新版\n");
    choose = getchar();
    if (choose == '2')
    {
        goto Table;
    }
    if (choose == '3')
    {
        system("cls");
        printf("获取最新版请到:https://github.com/Snowballl11/YANSUO/releases/latest\n");
        system("pause");
        goto END;
    }
    system("cls");

    slowprintf("你的姓名是？\n");
    slowprintf("【1】李朋鸟\n");
    slowprintf("【2】李四\n");
    slowprintf("【3】李戊\n");
    slowprintf("【4】自定义\n");
    getchar();//去掉缓冲区剩的一个回车
    choose = getchar();
    if (choose == '4')
    {
        end_1 = time(NULL);
        if ((end_1 - begin)%2)
        {
            slowprintf("好的，自定义先生。你是龙虾国的一名警察，2010年8月，上司决定将你任命为枯井案主领导人，你决定：\n");
        }
        else
        {
            slowprintf("请输入您的姓名:");
            scanf("%s", name);
            slowprintf("\n");
            printf("好的，%s先生。你是龙虾国的一名警察，2010年8月，上司决定将你任命为枯井案主领导人，你决定：\n", name);
        }
    }
    else
    {
        slowprintf("好的，李先生。你是龙虾国的一名警察，2010年8月，上司决定将你任命为枯井案主领导人，你决定：\n");
    }
    slowprintf("【1】欣然接受\n");
    slowprintf("【2】找理由推脱掉\n");
    getchar();
    choose = getchar();
    if (choose == '2')
    {
        AE:
        slowprintf("恭喜你获得称号“人民的废物”（非标准结局1）\n");
    }
    else
    {
        slowprintf("你获得了案件信息：接到村民报案，山东省商平县李集乡三村交界（阿里村西侧）的枯井里发现一男性尸体，你决定\n");
        slowprintf("【1】派一名小警员将尸体拉上来\n");
        slowprintf("【2】亲自将尸体拉上来\n");
        getchar();
        choose = getchar();
        if (choose == '1')
        {
            slowprintf("经过鉴定，尸体高度腐败，男性，高1.83米，重90公斤，全身赤裸。你有些不太放心，还是决定亲自下井看看，发现了一把带血的斧头。你暗暗感叹小警员的不靠谱，但嘴上没有说什么\n");
            slowprintf("你立刻令法医进行尸检，死亡时间是7个月，死因是利器击头。你若有所思，决定：\n");
            slowprintf("【1】询问当地村民\n");
        }
        else
        {
            slowprintf("经过鉴定，尸体高度腐败，男性，高1.83米，重90公斤，全身赤裸，哦对了，除此之外，由于你的细心，还发现了一把带血的斧子。\n");
            slowprintf("你立刻令法医进行尸检，死亡时间是7个月，死因是利器击头。你若有所思，决定：\n");
            slowprintf("【1】询问当地村民\n");
            slowprintf("【2】询问小警员元芳\n");
        }
        getchar();
        choose = getchar();
        system("cls");
        if (choose == '1')
        {
            slowprintf("你走访调查，询问是否有村民家里有人失踪，确有几人，但体态特征都和井里的被害人对不上，你觉得：\n");
            slowprintf("【1】死者必是村里没有亲人，独自生活，又经常外出打工，所以失踪也不会引起怀疑的人。\n");
            slowprintf("【2】死者肯定是外地人，在当地活动，必须将整个商平县的失踪人员信息表调出来。\n");
            getchar();
            choose = getchar();
            if (choose == '1')
            {
                slowprintf("你觉得既然如此，那就算比对失踪人员信息表也不会有什么结果，为了节约办案时间，不如将目光放在报案人牛爷爷身上。\n");
                slowprintf("牛爷爷很高兴，并扬言要和你这个不知天高地厚的年轻人打个赌，他断定警方破不了这个案子，如果破了便请全体警员喝酒。你有些意外，随后突然想到了什么，轻轻一笑：\n");
                slowprintf("【1】“老人家，看来你对自己的犯罪手法很自信啊？”\n");
                slowprintf("【2】“好，这个赌我应下了，酒不用您请，但案子，我肯定会破的！”\n");
                getchar();
                choose = getchar();
                if (choose == '1')
                {
                    slowprintf("“你...你，小娃娃，俺老牛隐藏的这么好，你是如何...如何发现俺偷看隔壁美羊羊洗澡的？牛爷爷说着，脚步边往后退。\n");
                    slowprintf("你看到牛爷爷还想装傻，又看到他的动作，连忙招手示意，同伴会意立刻控制住了他，你信心满满的回去交差，经调查，牛爷爷确实偷看了美羊羊洗澡，触犯了《治安管理处罚法》，被判拘留15天，而枯井案的凶手还在逍遥法外。达成结局“只有牛爷爷受伤的世界”,非标准结局2\n");
                }
                else
                {
                    slowprintf("你思索良久，按你的推断虽然失踪人员名单里不会有死者，但如果犯罪人员杀人后逃逸，那在死者死亡时间附近失踪的人员必然有重大嫌疑。你觉得开始翻看：\n");
                    slowprintf("【1】2010年1月商平县失踪人员信息表\n");
                    slowprintf("【2】2010年2月商平县失踪人员信息表\n");
                    slowprintf("【3】2009年2月商平县失踪人员信息表\n");
                    slowprintf("【4】2009年1月商平县失踪人员信息表\n");
                    getchar();
                    choose = getchar();
                    if (choose == '1')
                    {
                        slowprintf("一共17人，没有一人与死者符合，这在你的预料之内，手下劝你扩大范围搜索，但按你的推断，就是范围扩大到全国也毫无意义，你力排众议，决定对那17人进行可疑人员的筛选调查。\n");
                        goto E;
                    }
                    else
                    {
                        goto D;
                    }
                }
            }
            else
            {
                goto C;
            }
        }
        else
        {
            slowprintf("元芳觉得必须先从死者身份上下手，于是劝你调出商平县失踪人员信息表进行体态特征比对，你欣然同意。\n");
            slowprintf("你灵机一动，既然死者死亡时间是七个月前，那你只需比对7个月前的失踪人员信息表就可以了，你高兴得开始翻看：\n");
            C:
            slowprintf("【1】2010年2月商平县失踪人员信息表\n");
            slowprintf("【2】2010年1月商平县失踪人员信息表\n");
            slowprintf("【3】2009年2月商平县失踪人员信息表\n");
            slowprintf("【4】2009年1月商平县失踪人员信息表\n");
            getchar();
            choose = getchar();
            if (choose == '2')
            {
                slowprintf("一共17人，但奇怪的是没有一人与死者符合，你眉头一皱，决定：\n");
                slowprintf("【1】对商平县失踪人员信息表可疑人物进行筛选调查\n");
                slowprintf("【2】将搜索范围扩大到山东省\n");
                getchar();
                choose = getchar();
                if (choose == '1')
                {
                    E:
                    slowprintf("通过调查，你们确定了4个可疑人物，你选择将重心放在：\n");
                    slowprintf("【1】熊大\n");
                    slowprintf("【2】李华\n");
                    slowprintf("【3】张三\n");
                    slowprintf("【4】“这三个人我都惹不起”\n");
                    getchar();
                    choose = getchar();
                    if (choose == '1')
                    {
                        G:
                        slowprintf("经过多番努力，你们找到了熊大的小轿车，并在后备箱中发现了血迹，经过DNA比对，这些血迹正是死者的。\n");
                        slowprintf("随后你们终于找到了他，通过其通话记录发现案发之前其与名为张三和熊二的人联系密切，通过DNA库的比对，终于确定了死者就是熊二！并且那把斧子上的血迹也确实是熊二的。困扰你们近半个月的谜团终于解开，在绝对的铁证之下，熊大承认了自己的恶行。你决定先审问他：\n");
                        slowprintf("【1】复述自己详细的作案过程\n");
                        slowprintf("【2】询问为什么失踪人员表里为什么没有熊大\n");
                        getchar();
                        choose = getchar();
                        if (choose == '1')
                        {
                            H:
                            slowprintf("据熊大口供，他和熊二是接到一个叫张三的人的雇佣，张三给了他们10万，命令他们杀死一个叫阿衰的人\n");
                            slowprintf("他和弟弟熊二采取了如制造车祸，制作炸弹等多项措施，但可能是阿衰过于幸运，结果每次都因为一些原因以失败告终。\n");
                            slowprintf("时间长了，张三受不了，给了熊大两个选择，要么杀了熊二拿上全部钱逃走，要么张三杀了熊大，显然，熊大选择了前者。\n");
                            slowprintf("你轻呼出一口气，总有一种这个案子自己办了很多次，终于办到这里的错觉，看来案件到此已经水落石出，接下来只需要找到那个叫张三的雇凶者就万事大吉了，你决定\n");
                            slowprintf("【1】询问熊大关于张三的信息\n");
                            slowprintf("【2】去阿里村走访受害人阿衰\n");
                            slowprintf("【3】走访询问张三家属\n");
                            getchar();
                            choose = getchar();
                            if (choose == '1')
                            {
                                AA:
                                slowprintf("熊大表示他和张三只有电话联系，而且当初是张三主动联系的熊大，除此之外对张三一无所知\n");
                                slowprintf("你若有所思，决定\n");
                                slowprintf("【1】去阿里村走访受害人阿衰\n");
                                slowprintf("【2】走访询问张三家属\n");
                                getchar();
                                choose = getchar();
                                if (choose == '1')
                                {
                                    goto AB;
                                }
                                else
                                {
                                    goto AC;
                                }
                            }
                            else if (choose == '2')
                            {
                                AB:
                                slowprintf("受害人阿衰听了你的话之后表示感谢，他说自己先前根本不知道自己多次被谋杀，在死神刀下走了好几遭。除此之外他表示与张三没有什么交情，只知道他是另一个村的村民，这话在其他村民口中得到了证实。\n");
                                slowprintf("你若有所思，决定\n");
                                slowprintf("【*】不用了，我已经知道真相了”，按照提示，请你按下电脑上的Ctrl+W ，迎接作者为你准备的小惊喜吧！\n");
                                slowprintf("【1】询问张三家属\n");
                                getchar();
                                choose = getchar();
                                slowprintf("家属表示，张三失踪前给家族所有人群发了一条短信，短信内容为“兄弟，我上外面躲债躲几年，不用担心我。”\n");
                                goto L;
                            }
                            else
                            {
                                AC:
                                slowprintf("家属表示，张三失踪前给家族所有人群发了一条短信，短信内容为“兄弟，我上外面躲债躲几年，不用担心我。”\n");
                                slowprintf("你若有所思，决定\n");
                                slowprintf("【1】去阿里村走访受害人阿衰\n");
                                slowprintf("【*】“不用了，我已经知道真相了”按照提示，请你按下电脑上的Alt+F4 ，迎接作者为你准备的小惊喜吧！\n");
                                getchar();
                                choose = getchar();
                                slowprintf("受害人阿衰听了你的话之后表示感谢，他说自己先前根本不知道自己多次被谋杀，在死神刀下走了好几遭。除此之外他表示与张三没有什么交情，只知道他是另一个村的村民，这话在其他村民口中得到了证实。\n");
                                L:
                                slowprintf("你很多想法，决定：\n");
                                slowprintf("【1】动用大量资源寻找张三\n");
                                slowprintf("【2】将重心放在刚刚的短信上\n");
                                getchar();
                                choose = getchar();
                                if (choose == '1')
                                {
                                    slowprintf("奇怪的是，张三就像人间蒸发了一样，经过大量时间的寻找毫无效果。你十分灰心，决定将重心放在刚刚的短信上。\n");
                                    goto AD;
                                }
                                else
                                {
                                    AD:
                                    slowprintf("【1】这个短信，一定是张三为了逃逸后不背亲友怀疑，而发出去的！\n");
                                    slowprintf("【2】这个短信，不像是...\n");
                                    getchar();
                                    choose = getchar();
                                    if (choose == '1')
                                    {
                                        M:
                                        slowprintf("啊对对对，你信心满满得继续投入到了寻找张三的过程中，直到退休......（达成结局，无法被破的老案，非标准结局4）\n");
                                    }
                                    else
                                    {
                                        slowprintf("你敏锐的发现张三群发的称呼竟然是“兄弟”，这在这个极其注重辈分的村子，称呼自己的爷爷，爸爸为兄弟可是大不敬，你想到：\n");
                                        slowprintf("【1】“这条短信，不是张三发的！”\n");
                                        slowprintf("【2】看来张三逃的太急，只能以兄弟这个称呼群发了。\n");
                                        getchar();
                                        choose = getchar();
                                        if (choose == '1')
                                        {
                                            slowprintf("你大胆猜测，张三已经遇害，这条短信是凶手用来迷惑张三亲友的，可没有别的线索的你们只能从寻找张三这一行动寻找突破口，可张三就像人间蒸发了一样，苦寻无果，案件逐渐陷入了僵局，不得已，你决定召开会议\n");
                                            slowprintf("会议上分析了现存的所有线索，你似乎有了一种我又行了的错觉，对寻找张三有了新的想法，就在这时，一个小警员元芳提出要给大家讲一个笑话\n");
                                            slowprintf("【1】“严肃点，讨论案件的过程中，讲笑话做甚！”\n");
                                            slowprintf("【2】“哦，正好大家这几天都很累了，道出来听听！”\n");
                                            getchar();
                                            choose = getchar();
                                            if (choose == '1')
                                            {
                                                slowprintf("你呵斥了小元芳，会后大家继续寻找张三\n");
                                                slowprintf("几个月后，毫无发现，你决定\n");
                                                K:
                                                loop:
                                                for (int i = 0;i < 5;i++)
                                                {
                                                    slowprintf("【1】继续寻找\n");
                                                    slowprintf("【2】选择放弃\n");
                                                    getchar();
                                                    choose = getchar();
                                                    if (choose == '2')
                                                    {
                                                        goto AE;//slowprintf("恭喜你获得称号“人民的废物”（非标准结局1）\n");
                                                    }
                                                    slowprintf("几个月后，毫无发现，你决定\n");
                                                }
                                                slowprintf("【1】选择放弃\n");
                                                slowprintf("【2】继续寻找\n");
                                                if (choose == '1')
                                                {
                                                    slowprintf("恭喜你获得称号“人民的废物”（非标准结局1）\n");
                                                }
                                                else
                                                {
                                                    slowprintf("达成结局“无法被破的老案”,非标准结局4\n");
                                                }
                                            }
                                            else
                                            {
                                                slowprintf("元芳表示，在他去被害人阿衰聊天的过程中，阿衰表示对熊大杀人手法不屑一顾，并表示，如果是自己，绝对会把尸体火化，而不是藏起来。”说完元芳还哈哈一笑，表示这阿衰说的跟他真杀过人似的，听完，众警员都笑了起来，而你\n");
                                                slowprintf("【1】笑\n");
                                                slowprintf("【2】不笑\n");
                                                getchar();
                                                choose = getchar();
                                                if (choose == '1')
                                                {
                                                    slowprintf("你哈哈大笑，这缓解了你的压力，让你更努力的投入寻找张三的过程中\n");
                                                    goto K;
                                                }
                                                else
                                                {
                                                    slowprintf("你没有笑，你并不觉得这是一个笑话，因为阿衰的工作就是在殡仪馆负责火化死人，你大胆猜测，阿衰其实知道张三要杀他，并完成反杀，伪造了一份假的身份信息将张三火化。你被自己这个猜测吓了一跳，决定寻找证据。\n");
                                                    slowprintf("你和警员们掉出了案发时间商平县附近几日的火化名单，并一一排查，但令你失望的是，这些人员信息全都是真实的，你决定\n");
                                                    slowprintf("【1】难道我想错了？不如从阿衰家属身上下手\n");
                                                    slowprintf("【2】按当地规定，阿衰还可以在附近几个县火化，不如调查一下另外几个县的火化人员信息真伪\n");
                                                    getchar();
                                                    choose = getchar();
                                                    if (choose == '1')
                                                    {
                                                        slowprintf("你找到了阿衰的媳妇翠花，翠花表示阿衰在1月的时候将家里木头沙发上的棉花垫子扔了，她质问阿衰，阿衰支支吾吾半天说不出来话，过了几天也不了了之了。\n");
                                                        slowprintf("你更加坚信了阿衰一定有问题，并猜测沙发垫上可能就是因为杀害被害人时沾上了血迹你决定\n");
                                                        slowprintf("按当地规定，阿衰还可以在附近几个县火化，不如调查一下另外几个县的火化人员信息真伪\n");
                                                        goto J;
                                                    }
                                                    else
                                                    {
                                                        J:
                                                        slowprintf("结果再次令你感到失望，你一一对比这些名单，发现都是真实信息，你愈加失望，决定\n");
                                                        slowprintf("【1】重新比对一遍，不放弃，真相一定藏在其中\n");
                                                        slowprintf("【2】开玩笑，我超勇的好不好，直接强制逮捕再说\n");
                                                        getchar();
                                                        choose = getchar();
                                                        if (choose == '1')
                                                        {
                                                            slowprintf("你没有放弃，用着无限的耐心开始比对，终于，在无数次的翻看中，你意外的发现“小明”这个名字竟然出现了两次！一次在商平县的档案中，一次在隔壁县的档案中\n");
                                                            slowprintf("你感觉柳暗花明，不敢怠慢，立刻命人调查核对，发现这两个小明为一人，也就是，阿衰将小明火化了两次，而其中一次其实是张三！\n");
                                                            slowprintf("你向阿衰说了这些，阿衰终于选择坦白真相\n");
                                                            slowprintf("原来，张三和阿衰的老婆翠花私通，阿衰知道但一直隐忍，张三后来更加放肆，想要独占翠花，就雇佣了熊大熊二杀害阿衰，几次谋杀未遂，熊大杀死了弟弟，拿了所有钱逃跑，而阿衰意识到自己被刺杀后忍无可忍，利用翠花把张三骗到家里将其杀害，并用其手机发送短信伪造躲债假象。（更多案件细节请留言其他分支）\n");
                                                            slowprintf("恭喜你达成结局“柳暗花明”啦啦啦啦啦啦\n注：本案件由今日说法奇案《烟锁殡仪馆》改编。\n");
                                                        }
                                                        else
                                                        {
                                                            slowprintf("你强制逮捕了阿衰，他的老婆看起来很开心，阿衰拒不承认，你也苦于没有证据并最终因为强行执法被革职。（获得结局：说，他奶奶滴，为什么不说！”,非标准结局5）\n");
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            goto M;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            slowprintf("尽管在调查中早就有了答案，你还是想听到犯人的亲口解释。\n");
                            slowprintf("熊大解释到他和死者熊二是外地亲兄弟，除此之外没什么亲近的亲人，熊二也没什么朋友，故失踪了也没人知道后报警，而熊大自己则因为结交了几个好朋友，逃逸失踪后，被警方登记在册。\n");
                            slowprintf("你点了点头，决定询问详细案件过程\n");
                            goto H;
                        }
                    }
                    else if (choose == '2')
                    {
                        F:
                        slowprintf("你和同伴很快便找到了李华的线索，他早就因为某不可说原因逃亡国外，并时常令中国友人帮他用英文写信，你排除了李华的嫌疑，但你没想到他权势滔天，得罪了李华，你的后半生职业再也不可能是警察。（达成结局“好奇心害死猫”,非标准结局7）\n");
                    }
                    else if (choose == '3')
                    {
                        slowprintf("你的调查一无所获，张三就好像人间蒸发了一样，不得已，你决定调查\n");
                        slowprintf("【1】熊大\n");
                        slowprintf("【2】李华\n");
                        getchar();
                        choose = getchar();
                        if (choose == '1')
                        {
                            goto G;
                        }
                        else
                        {
                            goto F;
                        }
                    }
                    else
                    {
                        slowprintf("恭喜你获得称号“人民的废物”（非标准结局1）\n");
                    }
                }
                else
                {
                    slowprintf("你将搜索范围扩大到山东省进行比对，但在2010年，一个1.83米高的男性实在罕见，失踪人员表里并无死者，你有些不甘，决定\n");
                    slowprintf("【1】将范围扩大到全国\n");
                    slowprintf("【2】对商平县失踪人员信息表可疑人物进行筛选调查\n");
                    getchar();
                    choose = getchar();
                    if (choose == '1')
                    {
                        slowprintf("你仍旧不死心，想放手一搏，将比对范围扩大到全国，你和同伴花费了大量的时间排查，可结果一无所获，死者就像是人间蒸发了一样。上级对你不满，你被换了下来，而那个案子，据说后来被一个叫李朋鸟的警察破了......（达成结局：撞了南墙也不回头，非标准结局6）\n");
                    }
                    else
                    {
                        goto E;
                    }
                }
            }
            else
            {
                D:
                slowprintf("“你的脑子里好像少了些什么”（非标准结局3）\n");
            }
        }
    }

    //==========================================================
    end = time(NULL);
    printf("您本次的给通关时间为%d秒\n",(end - begin));
    system("pause");
    //======================制作人员表===========================
    Table:
    system("cls");
    printf("=================================================================\n\n");
    printf("剧本改编:地沟油爱洗澡; 程序制作:白开水.; 技术支持:Residual sun\n\n");
    printf("=================================================================\n");
    printf("程序将于15秒后自动关闭\n");
    Sleep(15000);
    goto END;
    //==========================================================
    system("pause");
    END:
    return 0;
}
