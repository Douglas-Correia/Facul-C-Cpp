<%@ Page Title="" Language="C#" MasterPageFile="~/Principal.Master" AutoEventWireup="true" CodeBehind="Produto.aspx.cs" Inherits="LojaDepartamentos.WebForm3" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<table class="pagina"><tr>
<%
    string SqlSelectCommand;
    SqlSelectCommand = "SELECT IdProduto, Nome, Valor ";
    SqlSelectCommand += "FROM Produto ";
    SqlSelectCommand += "WHERE IdCategoria = " + Request.QueryString["idcategoria"] + " ";
    SqlSelectCommand += "ORDER BY Nome";
    SqlDataSource ds = new SqlDataSource(
        (string)Application["SqlConnectionString"], SqlSelectCommand);
    GridView gd = new GridView();
    gd.DataSource = ds;
    gd.DataBind();
    string tmp_idproduto, tmp_nome, tmp_valor, tmp_imagem;
    for (int i = 0; i < gd.Rows.Count; i++)
    {
        if (i % 4 == 3)
            Response.Write("</tr><tr>");
        tmp_idproduto = gd.Rows[i].Cells[0].Text;
        tmp_nome = gd.Rows[i].Cells[1].Text;
        tmp_valor = gd.Rows[i].Cells[2].Text;
        SqlSelectCommand = "SELECT Arquivo ";
        SqlSelectCommand += "FROM ImagemProduto ";
        SqlSelectCommand += "WHERE IdProduto = " + tmp_idproduto + " ";
        SqlSelectCommand += "AND IdSequencia = 1";
        SqlDataSource dsimagem = new SqlDataSource(
            (string)Application["SqlConnectionString"], SqlSelectCommand);
        GridView gdimagem = new GridView();
        gdimagem.DataSource = dsimagem;
        gdimagem.DataBind();
        tmp_imagem = gdimagem.Rows[0].Cells[0].Text;
        Response.Write("<td>");
        Response.Write(@"<img src=""images/" + tmp_imagem + @"""><br>");
        Response.Write(tmp_nome + "<br>");
        Response.Write(tmp_valor + "<br>");
        Response.Write(
            @"<a runat=""server"" href=""Adicionar.aspx?idproduto=");
        Response.Write(
            tmp_idproduto + @"""><img src=""../images/btncomprar.png""></a>");
        Response.Write("/<td>");
    }
%>
</tr></table>
</asp:Content>
