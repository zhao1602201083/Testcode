#include <QString>
#include <QtTest>

class Test3Test : public QObject
{
    Q_OBJECT

public:
    Test3Test();

private Q_SLOTS:
    void testCase1();
};

Test3Test::Test3Test()
{
}

void Test3Test::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Test3Test)

#include "tst_test3test.moc"
