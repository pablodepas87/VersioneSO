import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0



Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Label {
        id: label

        text: qsTr("Versione S.O: %1").arg(InfoSO)
        anchors.verticalCenter: parent.verticalCenter
        fontSizeMode: Text.VerticalFit
        font.pointSize: 15
        font.family: "Tahoma"
        anchors.horizontalCenter: parent.horizontalCenter
        verticalAlignment: Text.AlignVCenter
        font.capitalization: Font.AllUppercase
        color: "red"

    }


}
