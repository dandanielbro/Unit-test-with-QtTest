#include <QtTest>

// add necessary includes here

class TestQString : public QObject
{
    Q_OBJECT

public:
    TestQString();
    ~TestQString();

private slots:
    void toUpper();
    void toLower();
    void failChop();

};

TestQString::TestQString()
{

}

TestQString::~TestQString()
{

}

void TestQString::toUpper()
{
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}

void TestQString::toLower()
{
    QString str = "GOOD JOB, BRO";
    QCOMPARE(str.toLower(), QString("good job, bro"));
}

void TestQString::failChop()
{
    QString str = "google.com";
    str.chop(4);    // str = "google"
    QVERIFY(str == "google.");  // Will failed!
}

QTEST_APPLESS_MAIN(TestQString)

#include "tst_testqstring.moc"
