#include <QDebug>
#include <QDir>
#include <QFile>
#include <QString>
#include <QVector>

// root / tools / rdme-files-upd / build / Debug /
const QString repoRootPath = "../../../../";

QStringList ojList;

void readOJList()
{
    QDir repoCodesDir(repoRootPath + "codes/");
    qDebug() << repoCodesDir;
    ojList = repoCodesDir.entryList(QDir::Dirs);
    ojList.removeFirst(); // Remove '.'
    ojList.removeFirst(); // Remove '..'
    qDebug() << "OJ List:" << ojList;
}

void genOJRdme()
{
    for (auto i : ojList) {
        QDir curOJDir(repoRootPath + "codes/" + i);
        QStringList codeFileList = curOJDir.entryList(QDir::Files);
        QFile rdmeFile(curOJDir.absolutePath() + "/README.md");
        QString rdmeContent = QString("# %1 \n").arg(i);

        rdmeContent += "\n``` \n"; // Code block
        for (auto cf : codeFileList) {
            if (cf == "README.md")
                continue;
            rdmeContent += cf + "\n";
        }
        rdmeContent += "``` \n";
        rdmeContent += "\nby ChungZH\n";

        qDebug() << "Writing content to" << rdmeFile.fileName();

        if (!rdmeFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug() << QString("Open %1 failed!").arg(rdmeFile.fileName());
            return;
        } else {
            QTextStream out(&rdmeFile);
            out << rdmeContent;
            rdmeFile.close();
        }
    }
}

void updRepoRdme()
{
    QFile repoRdme(repoRootPath + "README.md");
    if (!repoRdme.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << QString("Open %1 failed!").arg(repoRdme.fileName());
        return;
    } else {
        QString rdmeContent = repoRdme.readAll();

        int insertPosition = rdmeContent.indexOf("```");

        rdmeContent.remove(insertPosition, rdmeContent.lastIndexOf("```") + 3 - insertPosition);

        QString insertContent;
        insertContent += "```\n";
        for (auto i : ojList) {
            insertContent += i;
            // field width
            insertContent += QString(15 - i.length(), ' ');
            insertContent += QString(" %1 files.\n").arg(QDir(repoRootPath + "codes/" + i).entryList().length());
        }
        insertContent += "```";

        rdmeContent.insert(insertPosition, insertContent);

        QTextStream out(&repoRdme);
        out.setCodec("UTF-8");
        repoRdme.resize(0);
        out << rdmeContent;
        repoRdme.close();
    }
}

int main()
{
    readOJList();

    if (ojList.isEmpty()) {
        qDebug() << "Path ERROR!";
        return 0;
    }

    genOJRdme();
    updRepoRdme();

    return 0;
}