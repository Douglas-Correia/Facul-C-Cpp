<%@ Page Title="" Language="C#" MasterPageFile="~/Principal.Master" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="LojaDepartamentos.WebForm1" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <%
        if(Session["CPF"] == null)
        {
            %>
            Informe seu CPF para iniciar as compras:<br />
            <asp:Label runat="server" ID="lblCPF">CPF: </asp:Label>
            <asp:TextBox runat="server" ID="txtCPF"></asp:TextBox>
            <asp:Button runat="server" ID="btnEnviar" text="Enviar" OnClick="btnEnviar_Click"/>
            <%
        }
    %>
    <%
        else
        {
            string sqlConnectionString = @"Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=LojaDepartamentos;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
            string sqlSelectCommand = "SELECT Nome FROM Cliente WHERE CPF = " + Session["CPF"];
            SqlDataSource ds = new SqlDataSource(sqlConnectionString, sqlSelectCommand);
            GridView gd = new GridView();
            gd.DataSource = ds;
            gd.DataBind();
            Response.Write("Bem vindo, " + gd.Rows[0].Cells[0].Text);
        }
    %>
</asp:Content>
