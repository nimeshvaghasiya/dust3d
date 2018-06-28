#ifndef DUST3D_UTIL_H
#define DUST3D_UTIL_H
#include <QString>
#include <map>
#include <cmath>
#include <QVector3D>
#include <QQuaternion>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

QString valueOfKeyInMapOrEmpty(const std::map<QString, QString> &map, const QString &key);
bool isTrueValueString(const QString &str);
bool isFloatEqual(float a, float b);
void qNormalizeAngle(int &angle);
QVector3D pointInHermiteCurve(float t, QVector3D p0, QVector3D m0, QVector3D p1, QVector3D m1);

#endif
